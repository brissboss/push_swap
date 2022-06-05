/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:30:40 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/30 14:18:39 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lst_size(t_list *begin)
{
	int	size;

	size = 0;
	while (begin != NULL)
	{
		begin = begin->next;
		size++;
	}
	return (size);
}
