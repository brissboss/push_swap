/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:58:31 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/30 14:17:53 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **begin_a, t_list **begin_b, int ab)
{
	int	len;

	if (ab)
		ft_printf("pa\n");
	else
		ft_printf("pb\n");
	len = lst_size(*begin_a);
	if (!(*begin_a))
		return ;
	if (!(*begin_b))
		*begin_b = lst_last(*begin_a);
	else
		lst_last(*begin_b)->next = lst_last(*begin_a);
	if (len > 1)
		stop_n(*begin_a, len - 2)->next = NULL;
	else
		*begin_a = NULL;
}
