/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:31:27 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/30 14:16:51 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **begin)
{
	t_list	*temp;
	t_list	*temp2;

	temp2 = *begin;
	ft_printf("sa\n");
	if (!temp2 || lst_size(temp2) < 2)
		return ;
	if (lst_size(temp2) == 2)
		return (rotate(begin));
	temp2 = stop_n(temp2, (lst_size(temp2) - 3));
	temp = temp2->next;
	temp2->next = temp2->next->next;
	temp2->next->next = temp;
	temp2->next->next->next = NULL;
}
