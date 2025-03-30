/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:31:41 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:15:51 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				contenido;
	struct s_stack	*next;
	int				min;
	int				max;
	int				position_ordered;
	int				middle_position;
}	t_stack;

// push_swap.c
void		error(int showError, int leave);
void		free_elements_stack(t_stack **stack);
void		free_split(char **str);
int			is_all_whitespace(char *str);

// checker_elements.c
void		check_arguments(char **argv);
bool		simbol(int c);
void		check_numbers(char *arguments, int j);
int			ft_count_number_digits(char *str);

// transforme.c
int			*transforme(char **argv, int *tam_num);
int			*join_function(char **argv, int *integer_str, int *pos);
int			*fusion(char **argv, int *tam_num);
int			*save_string(char **str, int *integer_str, int *pos);
bool		check_repeated(int *integer_str, int *tam_num);

// utils.c
int			ft_sqrt(int number);
void		print_stack(t_stack *stacks);
int			find_position(t_stack *stack, int number);
int			count_r(t_stack *stack, int number);
int			check_how_many_numbers(char **argv);

// stack_lists.c
void		stack_lists(int *integer_str, int *tam_num, t_stack **stack_a);
bool		is_ordered(t_stack *stacks_a);
t_stack		*add_new_node(int number);
void		add_index(t_stack **stack_a);
void		order_index_array(t_stack **stack_a, int *tam_num);

// moves_swap.c
void		swap(t_stack **stack);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stacks_a, t_stack **stack_b);

// moves_reverse_rotate.c
void		reverse_rotate(t_stack **stack);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stacks_b);
void		rrr(t_stack **stacks_a, t_stack **stacks_b);

// moves_rotate.c
void		rotate(t_stack **stacks);
void		ra(t_stack **stacks_a);
void		rb(t_stack **stacks_b);
void		rr(t_stack **stacks_a, t_stack **stacks_b);

// moves_push.c
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		push(t_stack **stack_1, t_stack **stack_2);

// algorithm.c
void		push_swap_function(t_stack **stacks_a,
				t_stack **stacks_b, int *tam_num);
bool		is_ordered(t_stack *stacks_a);
void		sort_three(t_stack **stacks_a);
void		sort_four(t_stack **stacks_a, t_stack **stacks_b);
void		check_four(t_stack **stack_a, t_stack **stack_b, int pos);

// sort_five_numbers.c
void		sort_five(t_stack **stacks_a, t_stack **stacks_b);
void		check_five(t_stack **stacks_a, t_stack **stacks_b, int pos);

// check_max_mins.c
void		check_max(t_stack **stack);
void		check_min(t_stack **stack);
void		checks_a(t_stack **stacks_a);
void		checks_b(t_stack **stacks_b);

// general_moves.c
void		swap_then_rotate(t_stack **stack_a);
void		rotate_then_swap(t_stack **stack_a);

// ksort.c
void		k_sort2(t_stack **stacks_a, t_stack **stacks_b, int length);
void		k_sort1(t_stack **stacks_a, t_stack **stacks_b, int length);

#endif
