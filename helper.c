/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:17:25 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/13 20:56:37 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || ((str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		if (result < INT_MIN || result < INT_MIN)
			error_exit("Beyond MIN & MAX");
		i++;
	}
	return (result * sign);
}

void	free_split(char **av)
{
	int	y;
	int	x;

	x = 0;
	while (av[x])
	{
		y = 0;
		while (av[x][y])
		{
			free(av[x][y]);
			y++;
		}
		free(av[x][y]);
		x++;
	}
}

void	error_exit(const char *msg)
{
	if (msg)
		ft_printf(RED "Error: %s\n" RESET, msg);
	else
		ft_printf(RED "Error: Unknown error\n" RESET);
	exit(1);
}

void	init_stack(t_list **one, t_list **a)
{
	one = NULL;
	a = NULL;
}

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
				error_exit("Duplication in the Function");
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
