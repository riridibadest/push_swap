/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:55:55 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/12 21:11:02 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*prev;
	t_list	*last;

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

void	rra(t_list **st_a)
{
	reverse_rotate(st_a);
	ft_printf("rra\n");
}

void	rrb(t_list **st_b)
{
	reverse_rotate(st_b);
	ft_printf("rrb\n");
}
