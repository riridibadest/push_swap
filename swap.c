/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:45:52 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/12 20:10:08 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*one;
	t_list	*two;

	if (!*stack || !(*stack)->next)
		return ;
	one = *stack;
	two = one->next;
	one->next = two->next;
	two->next = one;
	*stack = two;
}

void	sa(t_list **st_a)
{
	swap(st_a);
	ft_printf("sa\n");
}

void	sb(t_list **st_b)
{
	swap(st_b);
	ft_printf("sb\n");
}
