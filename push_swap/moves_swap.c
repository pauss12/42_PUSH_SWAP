/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:14:15 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:14:38 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	int	aux;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	aux = (*stack)->contenido;
	(*stack)->contenido = (*stack)->next->contenido;
	(*stack)->next->contenido = aux;
}

void	sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_stack **stacks_a, t_stack **stack_b)
{
	swap(stacks_a);
	swap(stack_b);
	ft_printf("ss\n");
}
