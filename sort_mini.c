/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:42:30 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/15 00:10:32 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*findmin(t_list *st_a)
{
	t_list	*min;
	t_list	*pot;

	pot = st_a;
	min = st_a;
	while (pot->next)
	{
		if ((int)(intptr_t)pot->next->content < (int)(intptr_t)min->content)
			min = pot->next;
		pot = pot->next;
	}
	return (min);
}

t_list	*findmax(t_list *st_a)
{
	t_list	*max;
	t_list	*pot;

	pot = st_a;
	max = st_a;
	while (pot->next)
	{
		if ((int)(intptr_t)pot->next->content > (int)(intptr_t)max->content)
			max = pot->next;
		pot = pot->next;
	}
	return (max);
}

int	find_index(t_list *st_a, t_list *min)
{
	int	i;

	i = 0;
	while (st_a && st_a != min)
	{
		st_a = st_a->next;
		i++;
	}
	return (i);
}

void	sort_3(t_list **st_a)
{
	int		size;
	t_list	*max;

	size = ft_lstsize(*st_a);
	if (size < 3 || check_sorted(*st_a) == 0)
		return ;
	max = findmax(*st_a);
	if (max->next && max != *st_a)
		rra(st_a);
	else if (max == *st_a)
		ra(st_a);
	if ((int)(intptr_t)(*st_a)->content > (int)(intptr_t)(*st_a)->next->content)
		sa(st_a);
	else if ((int)(intptr_t)(*st_a)->content < (int)(intptr_t)(*st_a)->next->content)
		return ;
}

// void	sort_4n5(t_list *st_a, t_list *st_b)
// {
// 	t_list	*max;
// 	t_list	*pot;
// 	t_list	*end;

// 	max = findmax(st_a);
// 	while (ft_lstsize(st_a > 3))
// 	{
// 		while (max != st_a)
// 		{
// 			if (!max->next)
// 				rra(st_a);
// 			ra(st_a);
// 		}
// 		pb(st_a);
// 	}
// 	sort_3(st_a);
// 	while (ft_lstsize(st_b) > 0)
// 		pa(st_a, st_b);
// }

void	sort_4n5(t_list **st_a, t_list **st_b)
{
	t_list	*min;
	int		index;

	while (ft_lstsize(*st_a) > 3)
	{
		min = findmin(*st_a);
		index = find_index(*st_a, min);
		if (index <= ft_lstsize(*st_a) / 2)
			while (*st_a != min)
				ra(st_a);
		else
			while (*st_a != min)
				rra(st_a);
		pb(st_a, st_b);
	}
	sort_3(st_a);
	while (ft_lstsize(*st_b) > 0)
		pa(st_a, st_b);
}
