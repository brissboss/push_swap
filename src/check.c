/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:37:37 by tbrissia          #+#    #+#             */
/*   Updated: 2022/04/09 20:31:40 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check(char	**array)
{
	int	i;
	int	j;

	i = 0;
	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			if (!ft_isdigit((int)array[i][j]))
			{
				ft_printf("error\n");
				exit (0);
			}
			j++;
		}
		i++;
	}
}

void	check_argv(char	**array)
{
	int	i;
	int	j;

	i = 1;
	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			if (!ft_isdigit((int)array[i][j]))
			{
				if (array[i][j] != '-')
				{
					ft_printf("Error\n");
					exit (0);
				}
			}
			j++;
		}
		i++;
	}
}

void	check_double(int *array, int size_array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size_array)
	{
		i = (j + 1);
		while (i < size_array)
		{
			if (array[j] == array[i])
			{
				ft_printf("Error : %d Appears several times\n", array[j]);
				exit(0);
			}
			i++;
		}
		j++;
	}
}
