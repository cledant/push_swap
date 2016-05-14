/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:18:55 by cledant           #+#    #+#             */
/*   Updated: 2016/05/14 14:13:48 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static inline int		ft_do_swap(t_stack *a, t_stack *b, t_list **list,
							int debug)
{
	ft_stack_swap(a);
	if (ft_sort_add_list("sa", 3, list) == -1)
		return (-1);
	if (debug == 1)
		ft_stack_display_both(a, b);
	return (1);
}

static inline int		ft_do_first_if(t_stack *a, t_stack *b, t_list **list,
							int debug)
{
	ft_stack_rotate(a);
	if (ft_sort_add_list("ra", 3, list) == -1)
		return (-1);
	if (debug == 1)
		ft_stack_display_both(a, b);
	if (ft_sort_phase_1_in_b(a, b, list, debug) == -1)
		return (-1);
	return (0);
}

static inline int		ft_do_else(t_stack *a, t_stack *b, t_list **list,
							int debug)
{
	ft_stack_rotate(a);
	if (ft_sort_add_list("ra", 3, list) == -1)
		return (-1);
	if (debug == 1)
		ft_stack_display_both(a, b);
	return (0);
}

static inline int		ft_do_second_if(t_stack *a, t_stack *b, t_list **list,
							int debug)
{
	if (a->array[a->in - 1] == ft_stack_min_value(a) &&
			a->array[a->in - 2] > a->array[a->in - 3])
	{
		if (ft_do_first_if(a, b, list, debug) == -1)
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
		if (ft_do_else(a, b, list, debug) == -1)
			return (-1);
	}
	return (0);
}

int						ft_sort_phase_1(t_stack *a, t_stack *b,
							t_list **list, int debug)
{
	int		sort;

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
				return (ft_do_swap(a, b, list, debug));
		}
		if (ft_do_second_if(a, b, list, debug) == -1)
			return (-1);
	}
	return (1);
}
