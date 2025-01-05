static int  __init proc_init( void )
{
    printk("Start module\n");
    static struct proc_dir_entry *procfs_tree;
    static struct proc_dir_entry *procfs_mem;
    static struct proc_dir_entry *procfs_files;
    
    static struct proc_ops proc_file_fops_tree = {
        .proc_read = read_proc_tree,
        .proc_write = write_proc_tree
    };

    static struct proc_ops proc_file_fops_mem = {
        .proc_read = read_proc_mem,
        .proc_write = write_proc_mem
    };

    static struct proc_ops proc_file_fops_files = {
        .proc_read = read_proc_files,
        .proc_write = write_proc_files
    };

    procfs_tree = proc_create(PROCFS_TREE_NAME, S_IFREG | S_IRUGO | S_IWUGO, NULL, &proc_file_fops_tree);
    procfs_mem = proc_create(PROCFS_MEM_NAME, S_IFREG | S_IRUGO | S_IWUGO, NULL, &proc_file_fops_mem);
    procfs_files = proc_create(PROCFS_FILES_NAME, S_IFREG | S_IRUGO | S_IWUGO, NULL, &proc_file_fops_files);

    msg_tree = kmalloc(MAX_WRITE_BUF_SIZE * sizeof(char), GFP_KERNEL);
    msg_mem = kmalloc(MAX_WRITE_BUF_SIZE * sizeof(char), GFP_KERNEL);
    msg_files = kmalloc(MAX_WRITE_BUF_SIZE * sizeof(char), GFP_KERNEL);

    if (procfs_tree == NULL || procfs_mem == NULL || procfs_files == NULL) 
    {
        remove_proc_entry(PROCFS_TREE_NAME, NULL);
        remove_proc_entry(PROCFS_MEM_NAME, NULL);
        remove_proc_entry(PROCFS_FILES_NAME, NULL);
        printk("Error: Could not initialize files in /proc\n");
        return -ENOMEM;
    }
    
    return 0;
}


static void __exit proc_exit( void )
{
    printk("Procfs cleanup\n");
    kfree(msg_tree);
    kfree(msg_mem);
    kfree(msg_files);	
    remove_proc_entry(PROCFS_TREE_NAME, NULL);
    remove_proc_entry(PROCFS_MEM_NAME, NULL);
    remove_proc_entry(PROCFS_FILES_NAME, NULL);
    printk("Success cleanup module\n");
}


static ssize_t read_proc_mem(struct file *filp,char *buf,size_t count,loff_t *offp ) 
{
    char msg2[] = "Pass id of process";
    char *buf_msg = vmalloc(1000000 * sizeof(char));

    if (is_number(msg_mem, strlen(msg_mem)))
    {
        int id = str_to_number(msg_mem, strlen(msg_mem));
        mem_info(id, buf_msg);
    }
    else
    {
        memcpy(buf_msg, msg2, strlen(msg2));
        buf_msg[strlen(msg2)] = '\0';
    }
    
    int res;

    if(*offp >= strlen(buf_msg))
    {    
        *offp = 0;
        return 0;
    }

    if(count > strlen(buf_msg) - *offp) 
       count = strlen(buf_msg) - *offp;

    res = copy_to_user((void*)buf, buf_msg + *offp, count);

    *offp += count;
    return count;
}

static ssize_t write_proc_mem(struct file *filp,const char *buf,size_t count,loff_t *offp)
{
    ssize_t procfs_buf_size = count;

    if (procfs_buf_size > MAX_WRITE_BUF_SIZE)
    {
        procfs_buf_size = MAX_WRITE_BUF_SIZE;
    }
    
    copy_from_user(msg_mem, buf, procfs_buf_size);

    msg_mem[procfs_buf_size] = '\0';
    printk("Message to /proc/%s from user-space: %s\n", PROCFS_MEM_NAME, msg_mem);

    return count;
}