/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:13:10 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:13:11 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_then_rotate(t_stack **stack_a)
{
	sa(stack_a);
	ra(stack_a);
}

void	rotate_then_swap(t_stack **stack_a)
{
	ra(stack_a);
	sa(stack_a);
}
