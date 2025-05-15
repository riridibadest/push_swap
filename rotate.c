/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:11:39 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/12 20:14:03 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	ra(t_list **st_a)
{
	rotate(st_a);
	ft_printf("ra\n");
}

void	rb(t_list **st_b)
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
