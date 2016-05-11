/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_min_first.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:12:57 by cledant           #+#    #+#             */
/*   Updated: 2016/05/11 19:44:14 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_stack_max_value(t_stack *stack)
{
	int		max;
	int		j;

	j = 0;
	max = stack->array[0];
	while (j < stack->in)
	{
		if (max < stack->array[j])
			max = stack->array[j];
		j++;
	}
	return (max);
}
