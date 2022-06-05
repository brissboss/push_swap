/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:40:09 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/30 14:39:07 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	end_list(t_list **begin, t_list *new)
{
	while ((*begin)->next != NULL)
		*begin = (*begin)->next;
	(*begin)->next = new;
}
