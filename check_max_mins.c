/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_mins.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:12:36 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:12:38 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max(t_stack **stack)
{
	t_stack	*aux;

	aux = *stack;
	if (aux->next == NULL)
		(*stack)->max = aux->contenido;
	while (aux != NULL)
	{
		if (aux->contenido > (*stack)->max)
			(*stack)->max = aux->contenido;
		aux = aux->next;
	}
}

void	check_min(t_stack **stack)
{
	t_stack	*aux;

	aux = *stack;
	(*stack)->min = aux->contenido;
	while (aux != NULL)
	{
		if (aux->contenido < (*stack)->min)
			(*stack)->min = aux->contenido;
		aux = aux->next;
	}
}

void	checks_a(t_stack **stacks_a)
{
	check_max(stacks_a);
	check_min(stacks_a);
}

void	checks_b(t_stack **stacks_b)
{
	check_max(stacks_b);
	check_min(stacks_b);
}
