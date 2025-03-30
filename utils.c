/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:16:58 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:44:39 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int number)
{
	int	i;

	if (number < 4)
		return (1);
	i = 2;
	while (i * i < number)
		i++;
	if (i * i > number)
	{
		if ((i * i - number) < ((i - 1) * (i - 1) + (-number)))
			return (i);
	}
	return (i - 1);
}

void	print_stack(t_stack *stacks)
{
	t_stack	*aux;

	aux = stacks;
	while (aux != NULL)
	{
		ft_printf("\nEl numero es %d", aux->contenido);
		aux = aux->next;
	}
	ft_printf("\n");
}

int	find_position(t_stack *stack, int number)
{
	int		pos;
	t_stack	*aux;

	pos = 0;
	aux = stack;
	while (aux != NULL)
	{
		if (aux->contenido == number)
			break ;
		pos++;
		aux = aux->next;
	}
	return (pos);
}

int	count_r(t_stack *stack, int number)
{
	int	counter;

	counter = 0;
	while (stack && stack->position_ordered != number)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

int	check_how_many_numbers(char **argv)
{
	int	i;
	int	nums;

	i = 1;
	nums = 0;
	while (argv[i] != NULL)
	{
		nums += ft_count_number_digits(argv[i]);
		i++;
	}
	return (nums);
}
