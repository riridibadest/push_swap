/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:17:25 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/15 19:49:05 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || ((str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		if (sign == 1 && result > INT_MAX)
			error_exit("Error");
		if (sign == -1 && - result < INT_MIN)
			error_exit("Error");
		i++;
	}
	return (result * sign);
}

void	free_split(char **av)
{
	int	x;

	x = 0;
	while (av[x])
	{
		free(av[x]);
		x++;
	}
	free(av);
}

void	error_exit(const char *msg)
{
	if (msg)
		write(2, "Error\n", 6);
	else
		write(2, "Error\n", 6);
	exit(1);
}

// t_list	*init_stack(t_list **one, t_list **a)
// {
// 	*one = NULL;
// 	*a = NULL;
// 	return (*one, *a);
// }

void	check_2x(t_list **st_a)
{
	t_list	*now;
	t_list	*nt;

	now = *st_a;
	while (now)
	{
		nt = now->next;
		while (nt)
		{
			if ((int)(intptr_t)now->content == (int)(intptr_t)nt->content)
				error_exit("Error\n");
			nt = nt->next;
		}
		now = now->next;
	}
}

// void	stack_push(t_stack *s, int val)
// {
// 	if (s->size >= MAX_SIZE)
// 	{
// 		write(2, "Stack Overflow\n", 15);
// 		exit(1);
// 	}
// 	s->values[s->tail] = val;
// 	s->tail = (s->tail + 1) % MAX_SIZE; // wrap around
// 	s->size++;
// }
