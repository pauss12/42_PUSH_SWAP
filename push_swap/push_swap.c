/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:14:50 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:14:52 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int showError, int leave)
{
	if (showError == 1)
	{
		write(2, "Error\n", 6);
	}
	if (leave == 1)
		exit(1);
}

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_elements_stack(t_stack **stack)
{
	t_stack	*aux;

	while ((*stack) != NULL)
	{
		aux = (*stack)->next;
		free(*stack);
		(*stack) = aux;
	}
}

int	is_all_whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_stack	*stacks_a;
	t_stack	*stacks_b;
	int		tam_num;
	int		*integer_str;

	stacks_a = NULL;
	stacks_b = NULL;
	tam_num = 0;
	if (argc == 1)
		return (0);
	check_arguments(argv);
	integer_str = fusion(argv, &tam_num);
	stack_lists(integer_str, &tam_num, &stacks_a);
	push_swap_function(&stacks_a, &stacks_b, &tam_num);
	free_elements_stack(&stacks_a);
	free(stacks_a);
	stacks_a = NULL;
	return (0);
}
