/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_min_first_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 13:04:42 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 13:05:49 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_min_first_a(t_stack *sort, t_stack *disp, t_list **list)
{
	int		min;
	int		j;
	int		loc;

	j = 0;
	min = sort->array[0];
	loc = 0;
	while (j < sort->in)
	{
		if (min > sort->array[j])
		{
			min = sort->array[j];
			loc = j;
		}
		j++;
	}
	if ((sort->in - 1 - loc) < (sort->in - 1) / 2)
	{
		while (sort->array[sort->in - 1] != min)
		{
			ft_stack_rotate(sort);
			if (ft_sort_add_list("ra", 3, list) == -1)
				return (-1);
			ft_stack_display_both(sort, disp);
		}
	}
	else
	{
		while (sort->array[sort->in - 1] != min)
		{
			ft_stack_rev_rotate(sort);
			if (ft_sort_add_list("rra", 4, list) == -1)
				return (-1);
			ft_stack_display_both(sort, disp);
		}
	}
	return (1);
}
