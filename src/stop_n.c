/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stop_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:34:06 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/30 14:17:15 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*stop_n(t_list *lst, int n)
{
	int	len;
	int	i;

	len = lst_size(lst);
	if (!lst || !len)
		return (NULL);
	i = 0;
	while (i++ < n)
		lst = lst->next;
	return (lst);
}
