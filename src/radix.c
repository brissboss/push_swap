/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 08:41:09 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/30 16:51:40 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sorted(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	while (temp->next)
	{
		if (temp->data < temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	radix(t_list **begin_a, t_list **begin_b, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (!sorted(begin_a))
	{
		j = 0;
		while (j < size)
		{
			temp = lst_last(*begin_a)->data;
			if ((temp >> i) & 1)
				rotate(begin_a);
			else
				push(begin_a, begin_b, 0);
			j++;
		}
		i++;
		while (*begin_b)
			push(begin_b, begin_a, 1);
	}
}

void	five_sort(t_list **begin_a, t_list **begin_b)
{
	while (lst_size(*begin_a) != 3)
	{
		if (lst_last(*begin_a)->data == 3 || lst_last(*begin_a)->data == 4)
			push(begin_a, begin_b, 0);
		else
			rotate(begin_a);
	}
	third_sort(begin_a);
	if ((*begin_b)->data == 3)
	{
		push(begin_b, begin_a, 1);
		push(begin_b, begin_a, 1);
		rotate(begin_a);
		rotate(begin_a);
	}
	else
	{
		push(begin_b, begin_a, 1);
		rotate(begin_a);
		push(begin_b, begin_a, 1);
		rotate(begin_a);
	}
}

void	third_sort(t_list **begin_a)
{
	if ((*begin_a)->data == 1 && (*begin_a)->next->data == 0)
		rotate(begin_a);
	else if ((*begin_a)->data == 2 && (*begin_a)->next->data == 0)
		swap(begin_a);
	else if ((*begin_a)->data == 0 && (*begin_a)->next->data == 2)
		reverse_rotate(begin_a);
	else if ((*begin_a)->data == 1 && (*begin_a)->next->data == 2)
	{
		reverse_rotate(begin_a);
		swap(begin_a);
	}
	else if ((*begin_a)->data == 0 && (*begin_a)->next->data == 1)
	{
		swap(begin_a);
		reverse_rotate(begin_a);
	}
}
