/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:50:42 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/13 21:59:36 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **from, t_list **to)
{
	t_list	*tmp;

	if (*from == NULL)
		return;
	tmp = *from;
	*from = tmp->next;
	tmp->next = *to;
	*to = tmp;
}

void	pa(t_list **st_a, t_list **st_b)
{
	push(st_b, st_a);
	ft_printf("pa\n");
}

void	pb(t_list **st_a, t_list **st_b)
{
	push(st_a, st_b);
	ft_printf("pb\n");
}
