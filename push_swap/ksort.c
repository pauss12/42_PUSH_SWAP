/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                              			    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 03:32:10 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/21 03:32:13 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	k_sort1(t_stack **stack_a, t_stack **stack_b, int length)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(length) * 14 / 10;
	while ((*stack_a))
	{
		if ((*stack_a)->position_ordered <= i)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->position_ordered <= i + range)
		{
			pb(stack_a, stack_b);
			i++;
			if (((*stack_a)->position_ordered > i + range))
				rr(stack_a, stack_b);
			else
				rb(stack_b);
		}
		else
			ra(stack_a);
	}
}

void	k_sort2(t_stack **stack_a, t_stack **stack_b, int length)
{
	int	rb_count;
	int	rrb_count;

	while (length - 1 >= 0)
	{
		rb_count = count_r(*stack_b, length - 1);
		rrb_count = length - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->position_ordered != length - 1)
				rb(stack_b);
			pa(stack_a, stack_b);
			length--;
		}
		else
		{
			while ((*stack_b)->position_ordered != length - 1)
				rrb(stack_b);
			pa(stack_a, stack_b);
			length--;
		}
	}
}
