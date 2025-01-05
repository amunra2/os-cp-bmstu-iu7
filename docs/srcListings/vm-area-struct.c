struct vm_area_struct 
{ 
    struct mm_struct * vm_mm; /* параметры области виртуальной памяти */ 
    unsigned long vm_start; 
    unsigned long vm_end; 
    /* Связянный список областей задачи отсортированный по адресам */ 
    struct vm_area_struct *vm_next; 
    ... 
    unsigned short vm_flags; 
    ... 
    struct vm_operations_struct * vm_ops; /*операции над областью */ 
    ... 
    unsigned long vm_pte; /* разделяемая память */ 
};
