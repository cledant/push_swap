/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_min_first.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:12:57 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 19:29:11 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_min_first(t_stack *stack, t_list **list)
{
	int		min;
	int		j;
	int		loc;

	j = 0;
	min = stack->array[0];
	loc = 0;
	while (j < stack->in)
	{
		if (min > stack->array[j])
		{
			min = stack->array[j];
			loc = j;
		}
		j++;
	}
	if ((stack->in - 1 - loc) < (stack->in - 1) / 2)
	{
		while (stack->array[stack->in - 1] != min)
		{
			ft_stack_rotate(stack);
			if (ft_sort_add_list("rb", 3, list) == -1)
				return (-1);
		}
	}
	else
	{
		while (stack->array[stack->in - 1] != min)
		{
			ft_stack_rev_rotate(stack);
			if (ft_sort_add_list("rrb", 4, list) == -1)
				return (-1);
		}
	}
	return (1);
}
