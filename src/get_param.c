/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_param.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissa <tbrissa@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:35:57 by tbrissa           #+#    #+#             */
/*   Updated: 2022/04/09 19:43:04 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*get_param(int argc, char **argv, int *size_array)
{
	int		*array;

	array = NULL;
	if (argc == 2)
	{
		array = param_plus_plus(argv, &size_array, array);
		if (!array)
		{
			ft_printf("Error: The string contains a max or min int\n");
			return (0);
		}
		check_double(array, *size_array);
		return (array);
	}
	array = param_plus(array, argc, argv, &size_array);
	if (checker_min_max(array, argv, *size_array - 1))
	{
		ft_printf("Error: The string contains a max or min int\n");
		return (0);
	}
	check_double(array, *size_array);
	return (array);
}

int	checker_min_max(int *array, char **argv, int size_array)
{
	int	other_size;

	other_size = size_array + 1;
	while (size_array > -1)
	{
		if (argv[other_size][0] != '-' && array[size_array] >= 0)
		{
			other_size--;
			size_array--;
		}
		else if ((argv[other_size][0] == '-') && (array[size_array] < 0))
		{
			size_array--;
			other_size--;
		}
		else
			return (1);
	}
	return (0);
}

int	checker_min_max_plus(int *array, char **argv, int size_array)
{
	while (size_array > -1)
	{
		if (argv[size_array][0] != '-' && array[size_array] >= 0)
			size_array--;
		else if ((argv[size_array][0] == '-') && (array[size_array] < 0))
			size_array--;
		else
			return (1);
	}
	return (0);
}

int	*param_plus_plus(char **argv, int **size_array, int *array)
{
	char	**argv_s;
	int		i;
	int		size_arg;

	i = 0;
	size_arg = 0;
	argv_s = ft_split(argv[1], ' ');
	while (argv_s[i++])
	{
		size_arg++;
		**size_array += 1;
	}
	i = -1;
	array = (int *)malloc(sizeof(int) * size_arg);
	if (array == NULL)
		return (0);
	check(argv_s);
	while (++i < size_arg)
		array[i] = ft_atoi(argv_s[i]);
	if (checker_min_max_plus(array, argv_s, **size_array - 1))
		return (0);
	return (array);
}

int	*param_plus(int *array, int argc, char **argv, int **size_array)
{
	int	i;

	i = 0;
	array = (int *)malloc(sizeof(int) * argc - 1);
	if (array == NULL)
		return (0);
	check_argv(argv);
	while (++i < argc)
		array[i - 1] = ft_atoi(argv[i]);
	**size_array = argc - 1;
	return (array);
}
