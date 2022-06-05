/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:37:06 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/30 14:18:25 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*new_elem(int content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->next = NULL;
	new->data = content;
	return (new);
}
