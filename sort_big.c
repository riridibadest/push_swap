/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 22:31:44 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/14 23:39:54 by yuerliu          ###   ########.fr       */
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
				rn->index++;
			cmp = cmp->next;
		}
		rn = rn->next;
	}
}

int	check_sorted(t_list *st_a)
{
	t_list	*current;

	current = st_a;
	while (current && current->next)
	{
		if ((int)(intptr_t)current->content > (int)(intptr_t)
		current->next->content)
			return (1);
		current = current->next;
	}
	return (0);
}

void	sort_large(t_list **st_a, t_list **st_b)
{
	int		bit_len;
	int		lst_size;
	int		i;

	give_index(*st_a);
	bit_len = 0;
	i = 0;
	lst_size = ft_lstsize(*st_a);
	while ((lst_size - 1) >> bit_len)
		bit_len++;
	while ((bit_len - i) > 0 && check_sorted(*st_a) == 1)
	{
		int j = 0;
		lst_size = ft_lstsize(*st_a);
		while (j < lst_size && check_sorted(*st_a) == 1)
		{
			int value = (int)(intptr_t)(*st_a)->index;
			if ((value >> i) & 1)
				ra(st_a);
			else
				pb(st_a, st_b);
			j++;
		}
		while (ft_lstsize(*st_b) > 0)
			pa(st_a, st_b);
		i++;
	}
}

// void	sort_large(t_list **st_a, t_list **st_b)
// {
// 	int		bit_len;
// 	int		lst_size;
// 	int		i;
// 	t_list	*current;

// 	give_index(*st_a);
// 	bit_len = 0;
// 	i = 0;
// 	current = *st_a;
// 	lst_size = ft_lstsize(*st_a);
// 	while ((lst_size - 1) >> bit_len)
// 		bit_len++;
// 	while ((bit_len - i) > 0 && check_sorted(*st_a) == 1)
// 	{
// 		lst_size = ft_lstsize(*st_a);
// 		while (lst_size != 0 && check_sorted(*st_a) == 1)
// 		{
// 			if (((int)(intptr_t)current->content >> i) & 1)
// 				ra(st_a);
// 			else
// 				pb(st_a, st_b);
// 		}
// 		while (ft_lstsize(*st_b) > 0)
// 			pa(st_a, st_b);
// 		i++;
// 	}
// }
