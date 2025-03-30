/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transforme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:16:26 by pmendez-          #+#    #+#             */
/*   Updated: 2024/03/02 18:16:39 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*transforme(char **argv, int *tam_num)
{
	int		pos;
	int		*integer_str;

	pos = 0;
	*tam_num = check_how_many_numbers(argv);
	if (*tam_num == 0)
		exit(1);
	integer_str = (int *)ft_calloc((*tam_num), sizeof(int));
	if (integer_str == NULL)
		return (NULL);
	integer_str = join_function(argv, integer_str, &pos);
	return (integer_str);
}

int	*join_function(char **argv, int *integer_str, int *pos)
{
	char	**str;
	int		i;

	str = NULL;
	i = 1;
	while (argv[i] != NULL)
	{
		str = ft_split(argv[i], ' ');
		if (str == NULL)
		{
			free(integer_str);
			return (NULL);
		}
		integer_str = save_string(str, integer_str, pos);
		free_split(str);
		i++;
	}
	return (integer_str);
}

int	*fusion(char **argv, int *tam_num)
{
	int	*integer_str;

	integer_str = transforme(argv, tam_num);
	if (check_repeated(integer_str, tam_num) == false)
	{
		free(integer_str);
		error(1, 1);
	}
	return (integer_str);
}

int	*save_string(char **str, int *integer_str, int *pos)
{
	int	i;
	int	state;

	i = 0;
	state = 0;
	while (str[i] != NULL)
	{
		integer_str[*pos] = ft_atoi_changed(str[i], &state);
		if (state == 1)
		{
			free(integer_str);
			error(1, 1);
		}
		i++;
		*pos += 1;
	}
	return (integer_str);
}

bool	check_repeated(int *integer_str, int *tam_num)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < *tam_num)
	{
		while (j < *tam_num)
		{
			if (integer_str[i] == integer_str[j])
				return (false);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (true);
}
