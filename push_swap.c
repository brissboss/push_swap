/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:32:01 by tbrissia          #+#    #+#             */
/*   Updated: 2022/04/09 20:01:22 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		size[3];
	int		*array;
	int		*copy;
	t_list	*begin;
	t_list	*begin2;

	if (argc == 1)
		return (0);
	begin = NULL;
	begin2 = NULL;
	size[0] = 0;
	array = get_param(argc, argv, &size[0]);
	if (!array)
		return (0);
	copy = simplify(array, size[0]);
	size[1] = size[0];
	while (size[0] - 1 >= 0)
		elem_list(&begin, new_elem(copy[size[0]-- -1]));
	size[2] = lst_size(begin);
	if (size[1] == 3)
		third_sort(&begin);
	else if (size[1] == 5)
		five_sort(&begin, &begin2);
	else
		radix(&begin, &begin2, size[2]);
}
