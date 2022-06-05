/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplify.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissa <tbrissa@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:39:01 by tbrissa           #+#    #+#             */
/*   Updated: 2022/03/30 14:17:35 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*sort(int *array, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = -1;
		}
		i++;
	}
	return (array);
}

int	*copy_sort(int *array, int size)
{
	int	i;
	int	*copy;

	i = -1;
	copy = (int *)malloc(sizeof(int) * size);
	if (!copy)
		return (NULL);
	while (++i < size)
		copy[i] = array[i];
	copy = sort(copy, size);
	return (copy);
}

int	*simplify(int *array, int size)
{
	int	*copy;
	int	i;
	int	j;

	i = 0;
	copy = copy_sort(array, size);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (array[i] == copy[j])
			{
				array[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (array);
}
