/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:38:10 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/30 14:39:26 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	elem_list(t_list **begin, t_list *new)
{
	t_list	*temp;

	temp = *begin;
	if (*begin == NULL)
		*begin = new;
	else
		end_list(&temp, new);
}
