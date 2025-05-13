/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 22:31:44 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/13 23:55:02 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	give_index(t_list *st_a)
{
	t_list	*rn;
	t_list	*cmp;

	rn = st_a;
	while (rn)
	{
		rn->index = 0;
		cmp = st_a;
		while (cmp)
		{
			if ((int)(intptr_t)rn->content > (int)(intptr_t)cmp->content)
				rn->index ++;
			cmp = cmp->next;
		}
		rn = rn->next;
	}
}
	

void	sort_large(t_list *st_a, t_list *st_b)
{
	int	bit_len;
	int	lst_size;

	lst_size = ft_lstsize(st_a);
	give_index(st_a);
	bit_len = 0;
	while((lst_size - 1) >> maxbits)
	while (st_a)
	{
		lst_size
	}

	while()
}
