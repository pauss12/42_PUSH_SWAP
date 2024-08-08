/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:13:59 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:14:00 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stacks)
{
	t_stack	*aux;
	t_stack	*aux2;

	aux = *stacks;
	aux2 = *stacks;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = aux2;
	*stacks = aux2->next;
	aux2->next = NULL;
}

void	ra(t_stack **stacks_a)
{
	rotate(stacks_a);
	ft_printf("ra\n");
}

void	rb(t_stack **stacks_b)
{
	rotate(stacks_b);
	ft_printf("rb\n");
}

void	rr(t_stack **stacks_a, t_stack **stacks_b)
{
	rotate(stacks_a);
	rotate(stacks_b);
	ft_printf("rr\n");
}
