/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:12:13 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:12:21 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_function(t_stack **stacks_a, t_stack **stacks_b, int *tam_num)
{
	if (is_ordered(*stacks_a) == true)
		return ;
	if (*tam_num == 1)
		return ;
	else if (*tam_num == 2)
	{
		if ((*stacks_a)->contenido > (*stacks_a)->next->contenido)
			sa(stacks_a);
	}
	else if (*tam_num == 3)
		sort_three(stacks_a);
	else if (*tam_num == 4)
		sort_four(stacks_a, stacks_b);
	else if (*tam_num == 5)
		sort_five(stacks_a, stacks_b);
	else
	{
		k_sort1(stacks_a, stacks_b, *tam_num);
		k_sort2(stacks_a, stacks_b, *tam_num);
	}
}

bool	is_ordered(t_stack *stacks_a)
{
	bool	ordenado;

	ordenado = true;
	while (stacks_a->next != NULL)
	{
		if (stacks_a->contenido > stacks_a->next->contenido)
			return (false);
		stacks_a = stacks_a->next;
	}
	return (ordenado);
}

void	sort_three(t_stack **stacks_a)
{
	int	number_one;
	int	second_number;
	int	third_element;

	number_one = (*stacks_a)->contenido;
	second_number = (*stacks_a)->next->contenido;
	third_element = (*stacks_a)->next->next->contenido;
	if ((number_one > second_number) && (second_number < third_element)
		&& (number_one < third_element))
		sa(stacks_a);
	else if ((number_one < second_number) && (second_number > third_element)
		&& (number_one > third_element))
		rra(stacks_a);
	else if ((number_one > second_number) && (second_number > third_element)
		&& (number_one > third_element))
		rotate_then_swap(stacks_a);
	else if ((number_one > second_number) && (second_number < third_element)
		&& (number_one > third_element))
		ra(stacks_a);
	else if ((number_one < second_number) && (second_number > third_element)
		&& (number_one < third_element))
		swap_then_rotate(stacks_a);
}

void	sort_four(t_stack **stacks_a, t_stack **stacks_b)
{
	int	pos;

	checks_a(stacks_a);
	pos = find_position(*stacks_a, (*stacks_a)->min);
	check_four(stacks_a, stacks_b, pos);
	sort_three(stacks_a);
	pa(stacks_a, stacks_b);
}

void	check_four(t_stack **stacks_a, t_stack **stacks_b, int pos)
{
	if (pos == 1)
		sa(stacks_a);
	else if (pos == 2)
	{
		rra(stacks_a);
		rra(stacks_a);
	}
	else if (pos == 3)
		rra(stacks_a);
	pb(stacks_a, stacks_b);
}
