/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_2_1_r.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:05:05 by cledant           #+#    #+#             */
/*   Updated: 2016/05/14 15:29:49 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static inline int		ft_do_push(t_stack *a, t_stack *b, t_list **list,
							int debug)
{
	ft_stack_push(a, b);
	if (ft_sort_add_list("pa", 3, list) == -1)
		return (-1);
	if (debug == 1)
		ft_stack_display_both(a, b);
	return (1);
}

static inline int		ft_do_rotate(t_stack *a, t_stack *b, t_list **list,
							int debug)
{
	ft_stack_rotate(a);
	if (ft_sort_add_list("ra", 3, list) == -1)
		return (-1);
	if (debug == 1)
		ft_stack_display_both(a, b);
	return (0);
}

static inline int		ft_do_both(t_stack *a, t_stack *b, t_list **list,
							int debug)
{
	if (ft_do_rotate(a, b, list, debug) == -1)
		return (-1);
	return (ft_do_push(a, b, list, debug));
}

int						ft_sort_phase_2_1_r(t_stack *a, t_stack *b,
							t_list **list, int debug)
{
	if (a->in == 0 || a->in == 1)
		return (ft_do_push(a, b, list, debug));
	else
	{
		while (1)
		{
			if (b->array[b->in - 1] < a->array[a->in - 1]
					&& b->array[b->in - 1] > a->array[0])
				return (ft_do_push(a, b, list, debug));
			else if (b->array[b->in - 1] > ft_stack_max_value(a)
					&& a->array[a->in - 1] == ft_stack_max_value(a))
				return (ft_do_both(a, b, list, debug));
			else if (b->array[b->in - 1] < ft_stack_min_value(a)
					&& a->array[a->in - 1] == ft_stack_min_value(a))
				return (ft_do_push(a, b, list, debug));
			else
			{
				if (ft_do_rotate(a, b, list, debug) == -1)
					return (-1);
			}
		}
		return (1);
	}
}
