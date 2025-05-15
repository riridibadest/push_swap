/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuerliu <yuerliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:26:44 by yuerliu           #+#    #+#             */
/*   Updated: 2025/05/15 00:12:56 by yuerliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/get_next_line/get_next_line.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define RED "\033[31m"
# define RESET "\033[0m"

	// typedef struct s_stack
	// {
	// 	int	*stack; // for the array
	// 	int	end;    //end_position
	// 	int	start;  //start_position
	// 	int	pot;    //index_number
	// 	int	len;    //length of array
	// }			t_stack;

	// typedef struct s_both
	// {
	// 	t_stack	a;
	// 	t_stack	b;
	// }			t_both;

//helpers
int	ps_atoi(const char *str);
void	free_split(char **av);
void	error_exit(const char *msg);
void	init_stack(t_list **one, t_list **a);
void	check_2x(t_list **st_a);
void	give_index(t_list *st_a);
int		check_sorted(t_list *st_a);
void	sort(t_list **st_a, t_list **st_b);
void	clean_stacks(t_list *st_a, t_list *st_b);
t_list	*parse_em(char **numbers, int arlen);
int		array_len(char **array);
t_list	*findmin(t_list *st_a);
t_list	*findmax(t_list *st_a);
int		find_index(t_list *st_a, t_list *min);
//push
void	push(t_list **from, t_list **to);
void	pa(t_list **st_a, t_list **st_b);
void	pb(t_list **st_a, t_list **st_b);
//swap
void	swap(t_list **stack);
void	sa(t_list **st_a);
void	sb(t_list **st_b);
//rotate
void	rotate(t_list **stack);
void	ra(t_list **st_a);
void	rb(t_list **st_b);
//reverse_rotate
void	reverse_rotate(t_list **stack);
void	rra(t_list **st_a);
void	rrb(t_list **st_b);
//sort
void	sort_large(t_list **st_a, t_list **st_b);
void	sort_3(t_list **st_a);
void	sort_4n5(t_list **st_a, t_list **st_b);

#endif