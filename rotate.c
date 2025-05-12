void    rotate(t_list *stack)
{
    t_list  *first;
    t_list  *last;
    int i;

    i = 0;
    if (!*stack || !(*stack)->next)
        return ;
    first = stack;
    *stack = first->next;
    lask = *stack;
    while (last->next)
        last = last->next;
    last->next = first;
    first->next = NULL;
}

void    ra(t_list *st_a)
{
    rotate(st_a);
    ft_printf("ra\n");
}

void    rb(t_list *st_b)
{
    rotate(st_b);
    ft_printf("rb\n");
}



// while (stack)
    // {
    //     i++;
    // }
    // head = stack;
    // stack->next = NULL;
    // stack[i - 1] = tail;
    // tail->next = head;