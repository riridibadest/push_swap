void swap(t_list *stack)
{
    t_list  *one;
    t_list  *two;
    
    if (!*stack || !*stack->next)
        return ;
    one = stack;
    two = one->next;
    one->next = two->next;
    two->next = one;
    *stack = two;
}

void    sa(t_list *stack)
{
    swap(*stack);
    ft_printf("sa\n");
}

void    sb(t_list *stack)
{
    swap(*stack);
    ft_printf("sb\n")
}