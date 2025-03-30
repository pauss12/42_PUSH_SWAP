/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:13:42 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:13:43 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*aux;
	t_stack	*aux2;

	aux = *stack;
	aux2 = *stack;
	while (aux->next->next != NULL)
	{
		aux = aux->next;
	}
	aux2 = aux->next;
	aux->next = NULL;
	aux2->next = *stack;
	*stack = aux2;
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stacks_b)
{
	reverse_rotate(stacks_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stacks_a, t_stack **stacks_b)
{
	reverse_rotate(stacks_a);
	reverse_rotate(stacks_b);
	ft_printf("rrr\n");
}
