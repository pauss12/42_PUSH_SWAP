/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:13:28 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:13:31 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}

void	push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*aux;

	if (*stack_a == NULL)
		return ;
	aux = *stack_a;
	(*stack_a) = (*stack_a)->next;
	aux->next = *stack_b;
	(*stack_b) = aux;
}
