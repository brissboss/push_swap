/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:34:55 by tbrissia          #+#    #+#             */
/*   Updated: 2022/04/09 19:30:47 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "includes/libft.h"

typedef struct s_list
{
	struct s_list	*next;
	int				data;
}	t_list;

t_list	*new_elem(int content);
t_list	*stop_n(t_list *lst, int n);
t_list	*lst_last(t_list *lst); // go to end list
void	radix(t_list **begin_a, t_list **begin_b, int size);
void	five_sort(t_list **begin_a, t_list **begin_b);
void	third_sort(t_list **begin_a);
void	elem_list(t_list **begin, t_list *new);
void	end_list(t_list **begin, t_list *new);
void	swap(t_list **begin);
void	push(t_list **begin_a, t_list **begin_b, int ab);
void	rotate(t_list **begin);
void	reverse_rotate(t_list **begin);
void	check(char	**array);
void	check_argv(char	**array);
void	check_double(int *array, int size_array);
int		*get_param(int argc, char **argv, int *size_array);
int		*simplify(int *array, int size);
int		*copy_sort(int *array, int size);
int		*sort(int *array, int size);
int		sorted(t_list **lst);
int		*param_plus(int *array, int argc, char **argv, int **size_array);
int		*param_plus_plus(char **argv, int **size_array, int *array);
int		lst_size(t_list *begin);
int		checker_min_max(int *array, char **argv, int size_array);
int		checker_min_max_plus(int *array, char **argv, int size_array);
#endif
