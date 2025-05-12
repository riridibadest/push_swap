// typedef struct s_stack
// {
//     int *stack;
//     int head;
//     int end;
//     int len;
// }   t_stack;

// typedef struct s_both
// {
//     t_stack a;
//     t_stack b;
// }   t_both;
// void

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}