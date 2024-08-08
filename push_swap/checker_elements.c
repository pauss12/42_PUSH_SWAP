/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:12:48 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 21:22:19 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_arguments(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] == ' ')
			j++;
		if (is_all_whitespace(argv[i]))
			error(1, 1);
		if (argv[i][j + 1] == '\0' && (!digit(argv[i][j])))
			error(1, 1);
		if ((!digit(argv[i][0])) && (!simbol(argv[i][j])) && argv[i][j] == ' ')
			error(1, 1);
		if (simbol(argv[i][j]) && argv[i][j + 1] == '0')
			error(1, 1);
		check_numbers(argv[i], j);
		i++;
	}
}

bool	simbol(int c)
{
	if (c == '-' || c == '+')
		return (true);
	return (false);
}

int	ft_count_number_digits(char *str)
{
	int	number_digits;
	int	i;

	i = 0;
	number_digits = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i + 1] != '\0')
			i++;
		while (digit(str[i]) && str[i + 1] != '\0')
		{
			if (str[i + 1] == ' ')
				number_digits++;
			i++;
		}
		if (digit(str[i]) && str[i + 1] == '\0')
			number_digits++;
		i++;
	}
	return (number_digits);
}

void	check_numbers(char *arguments, int j)
{
	while (arguments[j] == ' ')
		j++;
	while (arguments[j] != '\0')
	{
		if (!digit(arguments[j]) && !simbol(arguments[j])
			&& arguments[j] != ' ')
			error(1, 1);
		if ((((digit(arguments[j]))) && (digit(arguments[j + 1])))
			|| (arguments[j + 1] == '\0'))
			;
		else if (((digit(arguments[j]))) && (!digit(arguments[j + 1])
				&& arguments[j + 1] != ' '))
			error(1, 1);
		if ((!digit(arguments[j])) && (simbol(arguments[j])))
		{
			if (!digit(arguments[j + 1]))
				error(1, 1);
			if (((simbol(arguments[j + 1])) && (arguments[j + 1] != '\0')
					&& ((!digit(arguments[j + 1])))))
				error(1, 1);
		}
		j++;
	}
}
