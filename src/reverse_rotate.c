/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:18:43 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/30 11:19:18 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **begin)
{
	t_list	*temp;

	ft_printf("rra\n");
	if (!(*begin) || lst_size(*begin) < 2)
		return ;
	temp = (*begin)->next;
	lst_last(*begin)->next = *begin;
	(*begin)->next = NULL;
	*begin = temp;
}
