struct fdtable 
{ 
    unsigned int max_fds; 
    struct file **fd;
    unsigned long *close_on_exec; 
    unsigned long *open_fds; 
    unsigned long *full_fds_bits; 
    struct rcu_head rcu; 
};
