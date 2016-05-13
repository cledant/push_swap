/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_2_1_r.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:05:05 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 19:22:16 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_phase_2_1_r(t_stack *a, t_stack *b, t_list **list, int debug)
{
	int		val_a[2];

	if (a->in == 0 || a->in == 1)
	{
		ft_stack_push(a, b);
		if (ft_sort_add_list("pa", 3, list) == -1)
			return (-1);
		if (debug == 1)
			ft_stack_display_both(a, b);
		return (1);
	}
	else
	{
		while (1)
		{
			val_a[0] = ft_stack_min_value(a);
			val_a[1] = ft_stack_max_value(a);
			if (b->array[b->in - 1] < a->array[a->in - 1]
					&& b->array[b->in - 1] > a->array[0])
			{
				ft_stack_push(a, b);
				if (ft_sort_add_list("pa", 3, list) == -1)
					return (-1);
				if (debug == 1)
					ft_stack_display_both(a, b);
				return (1);
			}
			else if (b->array[b->in - 1] > val_a[1] &&
						a->array[a->in -1] == val_a[1])
			{
				ft_stack_rotate(a);
				if (ft_sort_add_list("ra", 3, list) == -1)
					return (-1);
				if (debug == 1)
					ft_stack_display_both(a, b);
				ft_stack_push(a, b);
				if (ft_sort_add_list("pa", 3, list) == -1)
					return (-1);
				if (debug == 1)
					ft_stack_display_both(a, b);
				return (1);
			}
			else if (b->array[b->in - 1] < val_a[0] &&
						a->array[a->in -1] == val_a[0])
			{
				ft_stack_push(a, b);
				if (ft_sort_add_list("pa", 3, list) == -1)
					return (-1);
				if (debug == 1)
					ft_stack_display_both(a, b);
				return (1);
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
}
