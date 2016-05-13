/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1_in_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:52:06 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 19:08:33 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_phase_1_in_b(t_stack *a, t_stack *b, t_list **list, int debug)
{
	int		val_b[2];
	int		way;

	if (b->in == 0 || b->in == 1)
	{
		ft_stack_push(b, a);
		if (ft_sort_add_list("pb", 3, list) == -1)
			return (-1);
		if (debug == 1)
			ft_stack_display_both(a, b);
		return (1);
	}
	else
	{
		if ((way = ft_sort_r_or_rr_p1b(a, b)) == -1)
			return (-1);
		while (1)
		{
			val_b[0] = ft_stack_min_value(b);
			val_b[1] = ft_stack_max_value(b);
			if (a->array[a->in - 1] < b->array[b->in - 1]
					&& a->array[a->in - 1] > b->array[0])
			{
				ft_stack_push(b, a);
				if (ft_sort_add_list("pb", 3, list) == -1)
					return (-1);
				if (debug == 1)
					ft_stack_display_both(a, b);
				return (1);
			}
			else if (a->array[a->in - 1] > val_b[1] &&
						b->array[b->in -1] == val_b[1])
			{
				ft_stack_rotate(b);
				if (ft_sort_add_list("rb", 3, list) == -1)
					return (-1);
				if (debug == 1)
					ft_stack_display_both(a, b);
				ft_stack_push(b, a);
				if (ft_sort_add_list("pb", 3, list) == -1)
					return (-1);
				if (debug == 1)
					ft_stack_display_both(a, b);
				return (1);
			}
			else if (a->array[a->in - 1] < val_b[0] &&
						b->array[b->in -1] == val_b[0])
			{
				ft_stack_push(b, a);
				if (ft_sort_add_list("pb", 3, list) == -1)
					return (-1);
				if (debug == 1)
					ft_stack_display_both(a, b);
				return (1);
			}
			else
			{
				if (way == 1)
				{
					ft_stack_rotate(b);
					if (ft_sort_add_list("rb", 3, list) == -1)
						return (-1);
				}
				else
				{
					ft_stack_rev_rotate(b);
					if (ft_sort_add_list("rrb", 4, list) == -1)
						return (-1);
				}
				if (debug == 1)
					ft_stack_display_both(a, b);
			}
		}
		return (1);
	}
}
