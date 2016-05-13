/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:18:55 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 19:47:35 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_phase_1(t_stack *a, t_stack *b, t_list **list, int debug)
{
	int		val[2];
	int		sort;

	val[0] = ft_stack_min_value(a);
	val[1] = ft_stack_max_value(a);
	while (a->in > 2)
	{
		if ((sort = ft_is_stack_sort_not_min_top(a)) == -1)
			return (-1);
		else if (sort == 1)
			return (1);
		else
		{
			if ((sort = ft_sort_phase_1_try_swap(a)) == -1)
				return (-1);
			else if (sort == 1)
			{
				ft_stack_swap(a);
				if (ft_sort_add_list("sa", 3, list) == -1)
					return (-1);
				if (debug == 1)
					ft_stack_display_both(a, b);
				return (1);
			}
		}
		if (a->array[a->in - 1] == val[0] &&
				a->array[a->in - 2] > a->array[a->in - 3])
		{
			ft_stack_rotate(a);
			if (ft_sort_add_list("ra", 3, list) == -1)
				return (-1);
			if (debug == 1)
				ft_stack_display_both(a, b);
			if (ft_sort_phase_1_in_b(a, b, list, debug) == -1)
				return (-1);
		}
		else if (a->array[a->in - 1] < a->array[0] ||
					a->array[a->in - 1] > a->array[a->in - 2])
		{
			if (ft_sort_phase_1_in_b(a, b, list, debug) == -1)
				return (-1);
		}
		else
		{
			ft_stack_rotate(a);
			if (ft_sort_add_list("ra", 3, list) == -1)
				return (-1);
			if (debug == 1)
				ft_stack_display_both(a, b);
		}
	}
	return (1);
}
