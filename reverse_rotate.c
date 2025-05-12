void    reverse_rotate(t_list **stack)
{
    t_list  *prev;
    t_list  *last;

    if (!*stack || !(*stack)->next)
        return ;
    last = *stack;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    if (prev)
        prev->next = NULL;
    last->next = *stack;
    *stack = last;
}
