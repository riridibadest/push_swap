/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:30:31 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/13 21:04:35 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		free (numbers);
		check_2x(st_a);
		sort(st_a, st_b);
	}
	return ;
}
