void parse_em(char **p2n, int arlen)
{
    size_t  i;

    while (i < arlen)
    {
        
        int num[i] = ft_atoi(p2n[i])
        i++
    }
}

int array_len(char **array)
{
    int i;

    i = 0;
    while (array[i] != NULL)
        i++;
    return (i);
}

void stack_push(t_stack *s, int val)
{
	if (s->size >= MAX_SIZE)
	{
		write(2, "Stack Overflow\n", 15);
		exit(1);
	}
	s->values[s->tail] = val;
	s->tail = (s->tail + 1) % MAX_SIZE;  // wrap around
	s->size++;
}