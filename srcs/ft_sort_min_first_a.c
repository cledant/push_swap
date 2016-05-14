/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_min_first_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 13:04:42 by cledant           #+#    #+#             */
/*   Updated: 2016/05/14 12:25:10 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static inline void		ft_find_loc(int *loc, int *min, t_stack *sort)
{
	int		j;

	j = 0;
	while (j < sort->in)
	{
		if (*min > sort->array[j])
		{
			*min = sort->array[j];
			*loc = j;
		}
		j++;
	}
}

static inline int		ft_do_rrotate(t_stack *sort, t_stack *disp,
							t_list **list, int debug)
{
	ft_stack_rev_rotate(sort);
	if (ft_sort_add_list("rra", 4, list) == -1)
		return (-1);
	if (debug == 1)
		ft_stack_display_both(sort, disp);
	return (1);
}

static inline int		ft_do_rotate(t_stack *sort, t_stack *disp,
							t_list **list, int debug)
{
	ft_stack_rotate(sort);
	if (ft_sort_add_list("ra", 3, list) == -1)
		return (-1);
	if (debug == 1)
		ft_stack_display_both(sort, disp);
	return (1);
}

int						ft_sort_min_first_a(t_stack *sort, t_stack *disp,
							t_list **list, int debug)
{
	int		min;
	int		loc;

	min = sort->array[0];
	loc = 0;
	ft_find_loc(&loc, &min, sort);
	if (loc < (sort->in - 1) / 2)
	{
		while (sort->array[sort->in - 1] != min)
		{
			if (ft_do_rrotate(sort, disp, list, debug) == -1)
				return (-1);
		}
	}
	else
	{
		while (sort->array[sort->in - 1] != min)
		{
			if (ft_do_rotate(sort, disp, list, debug) == -1)
				return (-1);
		}
	}
	return (1);
}
