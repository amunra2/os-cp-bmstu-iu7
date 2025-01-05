struct task_struct { 
    volatile long state; 
    void *stack; 
    unsigned int flags; 
    ...  
    int prio, static_prio; 
    ...  
    struct list_head tasks; 
  
    struct mm_struct *mm, *active_mm; 
    ...  
    pid_t pid; 
    pid_t tgid; 
    ...  
    struct task_struct *real_parent; 
    ...  
    char comm[TASK_COMM_LEN]; 
    ...  
    struct thread_struct thread; 
    ...  
    struct files_struct *files; 
    ... 
};
