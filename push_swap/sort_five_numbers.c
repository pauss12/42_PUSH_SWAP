/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 03:35:43 by pmendez-          #+#    #+#             */
/*   Updated: 2024/04/21 03:35:44 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack **stacks_a, t_stack **stacks_b)
{
	int	pos;

	checks_a(stacks_a);
	pos = find_position(*stacks_a, (*stacks_a)->min);
	check_five(stacks_a, stacks_b, pos);
	sort_four(stacks_a, stacks_b);
	pa(stacks_a, stacks_b);
}

void	check_five(t_stack **stacks_a, t_stack **stacks_b, int pos)
{
	if (pos == 1)
		sa(stacks_a);
	else if (pos == 2)
	{
		ra(stacks_a);
		sa(stacks_a);
	}
	else if (pos == 3)
	{
		rra(stacks_a);
		rra(stacks_a);
	}
	else if (pos == 4)
		rra(stacks_a);
	pb(stacks_a, stacks_b);
}
