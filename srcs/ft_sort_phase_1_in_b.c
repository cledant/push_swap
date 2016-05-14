/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1_in_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:52:06 by cledant           #+#    #+#             */
/*   Updated: 2016/05/14 14:51:18 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static inline int	ft_do_push(t_stack *a, t_stack *b, t_list **list,
						int debug)
{
	ft_stack_push(b, a);
	if (ft_sort_add_list("pb", 3, list) == -1)
		return (-1);
	if (debug == 1)
		ft_stack_display_both(a, b);
	return (1);
}

static inline int	ft_do_rotate_push(t_stack *a, t_stack *b, t_list **list,
						int debug)
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

static inline int	ft_do_b_rotate(int way, t_stack *b, t_list **list)
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
	return (0);
}

static inline int	ft_do_first_else(t_stack *a, t_stack *b, t_list **list,
						int debug)
{
	int		way;

	if ((way = ft_sort_r_or_rr_p1b(a, b)) == -1)
		return (-1);
	while (1)
	{
		if (a->array[a->in - 1] < b->array[b->in - 1]
				&& a->array[a->in - 1] > b->array[0])
			return (ft_do_push(a, b, list, debug));
		else if (a->array[a->in - 1] > ft_stack_max_value(b)
				&& b->array[b->in - 1] == ft_stack_max_value(b))
			return (ft_do_rotate_push(a, b, list, debug));
		else if (a->array[a->in - 1] < ft_stack_min_value(b)
				&& b->array[b->in - 1] == ft_stack_min_value(b))
			return (ft_do_push(a, b, list, debug));
		else
		{
			if (ft_do_b_rotate(way, b, list) == -1)
				return (-1);
			if (debug == 1)
				ft_stack_display_both(a, b);
		}
	}
	return (1);
}

int					ft_sort_phase_1_in_b(t_stack *a, t_stack *b,
						t_list **list, int debug)
{
	if (b->in == 0 || b->in == 1)
		return (ft_do_push(a, b, list, debug));
	else
		return (ft_do_first_else(a, b, list, debug));
}
