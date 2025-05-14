/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:30:31 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/15 00:22:41 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **st_a, t_list **st_b)
{
	int	size;

	size = ft_lstsize(st_a);
	if (size == 3)
		sort_3(st_a);
	if (size > 3 && size <= 5)
		sort_4n5(st_a, st_b);
	if (size > 5)
		sort_large(st_a, st_b);
}

void clean_stacks(t_list *st_a, t_list *st_b)
{
	t_list	*tmp;

	if (!st_a || !st_b)
		return ;
	while(st_a)
	{
		tmp = st_a;
		st_a = st_a->next;
		free (tmp);
	}
	while(st_b)
	{
		tmp = st_b;
		st_b = st_b->next;
		free (tmp);
	}
}

t_list	*parse_em(char **numbers, int arlen)
{
	size_t	i;
	t_list	*one;
	t_list	*a;
	t_list	*rn;

	i = 0;
	while (i < arlen)
	{
		one = ft_lstnew((void *)ft_atoi(numbers[i]));
		if (!one)
			return (NULL);
		if (!a)
			a = one;
		else
			rn->next = one;
		rn = one;
		i++;
	}
	return (a);
}

// void	make_push(char *numbers)
// {
// 	one = ft_lstnew((void *)ft_atoi(numbers));
// 	if (!one)
// 		return ;
// 	a->next = one;
// 	a = one;
// }

int	array_len(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	t_list	*st_a;
	t_list	*st_b;
	char	**numbers;

	st_a = NULL;
	st_b = NULL;
	if (ac < 2)
		return (1);
	if (ac >= 2)
	{
		if (av[1][0] == '\0')
			return (0);
		if (ac == 2)
			numbers = ft_split(av, ' ');
		else
			numbers = &av[1];
		st_a = parse_em(numbers, array_len(numbers));
		check_2x(st_a);
		sort(st_a, st_b);
		clean_stacks(st_a, st_b);
	}
	return ;
}
