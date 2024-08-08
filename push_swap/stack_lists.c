/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_lists.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:16:15 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:16:16 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*add_new_node(int number)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (new_node == NULL)
		return (NULL);
	new_node->contenido = number;
	new_node->next = NULL;
	return (new_node);
}

void	add_index(t_stack **stack_a)
{
	int			number;
	int			temp;
	t_stack		*stack_prueba;

	number = 0;
	stack_prueba = *stack_a;
	temp = stack_prueba->contenido;
	while (stack_prueba != NULL)
	{
		if (temp > stack_prueba->contenido)
			number++;
		stack_prueba = stack_prueba->next;
	}
	(*stack_a)->position_ordered = number;
}

void	order_index_array(t_stack **stack_a, int *tam_num)
{
	int			i;
	t_stack		**stack_prueba;

	i = *tam_num;
	stack_prueba = stack_a;
	while (i > 0)
	{
		add_index(stack_prueba);
		rotate(stack_prueba);
		i--;
	}
}

void	stack_lists(int *integer_str, int *tam_num, t_stack **stack_a)
{
	int		i;
	t_stack	*aux;
	t_stack	*new;

	i = 0;
	if (*stack_a == NULL)
		*stack_a = add_new_node(integer_str[i]);
	aux = *stack_a;
	while (i < *tam_num - 1)
	{
		i++;
		new = add_new_node(integer_str[i]);
		aux->next = new;
		aux = aux->next;
	}
	order_index_array(stack_a, tam_num);
	free(integer_str);
}
