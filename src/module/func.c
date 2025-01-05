#include "mod_proc.h"


bool is_number(const char *str, int n)
{
    for (int i = 0; i < n; i++)
        if (str[i] < '0' || str[i] > '9')
            return false;

    return true;
}


int str_to_number(const char *str, int n)
{
    int res = 0;

    for(int i = 0; i < n; i++)
        res = res * 10 + (str[i] - '0');

    return res;
}


struct task_struct* get_task_by_id(int id)
{
    struct task_struct *task;
    struct task_struct *current_task = NULL;

    rcu_read_lock();

    for_each_process(task)
    {
        task_lock(task);

        if(task->pid == id)	
            current_task = task;

        task_unlock(task);   
    }

    rcu_read_unlock();

    return current_task;
}


void mem_info(int id, char* buf)
{
    char *str = vmalloc(10000 * sizeof(char));
    int offset = 0;
    int cnt;
    bool found = false;

    struct task_struct *current_task = current;
    struct vm_area_struct *v;
    unsigned long t_size = 0;

    struct task_struct *task = get_task_by_id(id);

    if (task)
    {
        found = true;
        current_task = task;
    }

    if (found && current_task->mm != NULL)
    {
        printk("=====VIRTUAL MEMORY INFORMATION=====\n\n");
        v = current_task->mm->mmap;

        if(v != NULL)
        {
            printk("Process: %s[%d]\n", current_task->comm, current_task->pid);
            cnt = sprintf(str, "Process: %s[%d]\n", current_task->comm, current_task->pid);

            str[cnt] = '\0';
            memcpy(buf + offset, str, strlen(str));
            offset += strlen(str);

            int is_full = 0;

            while(v->vm_next != NULL)
            {
                unsigned long size = v->vm_end - v->vm_start;

                if (size > 100000) 
                {
                    printk("Full house\n");
                    is_full = 1;
                    break;
                }

                t_size = t_size + size;

                printk("Start: 0x%lx, End: \t0x%lx \t(block Size: \t0x%lx)\n", v->vm_start, v->vm_end, size);
                cnt = sprintf(str, "Start: \t0x%lx, \tEnd: \t0x%lx \t(block Size: \t0x%lx)\n", v->vm_start, v->vm_end, size);
                
                str[cnt] = '\0';
                memcpy(buf + offset, str, strlen(str));
                offset += strlen(str);
                v = v->vm_next;
            }

            if (is_full) 
            { } 
            else 
            {
                printk("Total size of virtual space is: 0x%lx\n", t_size);
                cnt = sprintf(str, "Total size of virtual space is: 0x%lx\n", t_size);

                str[cnt] = '\0';
                memcpy(buf + offset, str, strlen(str));
                offset += strlen(str);
            }
        }
    }
    else if (current_task->mm == NULL) 
    {
        printk("ID %d have no memory structure.\n", id);
        cnt = sprintf(str, "ID %d have no memory structure.\n", id);

        str[cnt] = '\0';
        memcpy(buf + offset, str, strlen(str));
        offset += strlen(str);
    }
    else
    {
        printk("ID %d not found\n", id);
        cnt = sprintf(str, "ID %d not found\n", id);

        str[cnt] = '\0';
        memcpy(buf + offset, str, strlen(str));
        offset += strlen(str);
    }
    
    buf[offset] = '\0';
    vfree(str);
}


void files_info(int id, char* buf)
{
    char *str = vmalloc(1000 * sizeof(char));
    int offset = 0;
    int cnt;

    bool found = false;
    struct task_struct *current_task = current;
    struct files_struct *open_files;
    struct fdtable *files_table; 
    struct path files_path;

    struct task_struct *task = get_task_by_id(id);

    if (task)
    {
        found = true;
        current_task = task;
    }

    if (found)
    {
        printk("=====OPEN FILES INFORMATION=====\n\n");
        printk("Process: %20s[%4d]\n", current_task->comm, current_task->pid);
        cnt = sprintf(str, "Process: %20s[%4d]\n", current_task->comm, current_task->pid);

        str[cnt] = '\0';
        memcpy(buf + offset, str, strlen(str));
        offset += strlen(str);

        int i = 0;
        open_files = current_task->files;
        files_table = files_fdtable(open_files);
        char *path;
        char *buf_tmp = (char*)kmalloc(10000 * sizeof(char), GFP_KERNEL);

        while(files_table->fd[i] != NULL)
        {
            files_path = files_table->fd[i]->f_path;
            char* name = files_table->fd[i]->f_path.dentry->d_iname;
            long long size = i_size_read(files_table->fd[i]->f_path.dentry->d_inode);
            path = d_path(&files_path, buf_tmp, 10000 * sizeof(char));

            printk("Name: \t%s, \tFD: \t%d, \tSize: \t0x%llx bytes \t(path: \t%s)\n", name, i, size , path);
            cnt = sprintf(str, "Name: \t%s, \tFD: \t%d, \tSize: \t0x%llx bytes \t(path: \t%s)\n", name, i, size , path);

            str[cnt] = '\0';
            memcpy(buf + offset, str, strlen(str));
            offset += strlen(str);
            i++;
        }

        if (i == 0) {
            printk("Process hasn't opened files");
            cnt = sprintf(str, "Process hasn't opened files.");

            str[cnt] = '\0';
            memcpy(buf + offset, str, strlen(str));
            offset += strlen(str);
        }
        kfree(buf_tmp);
    }
    else
    {
        printk("ID %d not found\n", id);
        cnt = sprintf(str, "ID %d not found\n", id);

        str[cnt] = '\0';
        memcpy(buf + offset, str, strlen(str));
        offset += strlen(str);
    }
    
    buf[offset] = '\0';
    vfree(str);
}

void process_info(struct task_struct* task, int n, char* buf, int* offset)
{
    char *str = vmalloc(1000 * sizeof(char));
    int cnt;
    
    int count = 0;
    struct Node* head = kmalloc(sizeof(Node), GFP_KERNEL);
    head->task = NULL;
    head->next = NULL;
    struct Node* cur = head;
    struct list_head* pos;

    list_for_each(pos, &task->children)
    {
        if (head->task == NULL)
            head->task = list_entry(pos, struct task_struct, sibling);
        else
        {
            cur->next = kmalloc(sizeof(Node),GFP_KERNEL);
            cur->next->task = list_entry(pos, struct task_struct, sibling);
            cur->next->next = NULL;
            cur = cur->next;
        }

        count++;
    }

    printk("process: %s[%d] (parent: %s[%d])\n", task->comm, task->pid , task->parent->comm, task->parent->pid);
    cnt = sprintf(str, "process: %s[%d]   (parent: %s[%d])\n",
                 task->comm, task->pid , task->parent->comm, task->parent->pid);

    str[cnt] = '\0';
    memcpy(buf + (*offset), str, strlen(str));
    (*offset) += strlen(str);

    if(count > 0)
    {
        struct Node* pr;
        n = n - 1;
        int i = 1;
        
        for(pr = head; pr != NULL;)
        {
            int m = DEPTH;

            for(; m > n; m--)
            {
                printk("\t");
                memcpy(buf + (*offset), "\t", strlen("\t"));
                (*offset) += strlen("\t");
            }

            printk("--- CHILD: %d, ", i);
            cnt = sprintf(str, "--- CHILD: %d, ", i);

            str[cnt] = '\0';
            memcpy(buf + (*offset), str, strlen(str));
            (*offset) += strlen(str);

            process_info(pr->task, n, buf, offset);

            i = i+1;
            struct Node* temp = pr;
            pr = pr->next;

            kfree(temp);
            temp = NULL;
        }
    }
    
    buf[*offset] = '\0';
    vfree(str);
}
