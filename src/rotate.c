/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:33:28 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/25 08:36:43 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **begin)
{
	t_list	*temp;
	t_list	*temp2;

	ft_printf("ra\n");
	if (!(*begin) || lst_size(*begin) < 2)
		return ;
	temp = NULL;
	temp2 = *begin;
	while (temp2->next != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
	}
	temp->next = NULL;
	temp2->next = *begin;
	*begin = temp2;
}
