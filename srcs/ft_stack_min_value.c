/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_min_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 12:46:12 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 12:46:13 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_stack_min_value(t_stack *stack)
{
	int		min;
	int		j;

	j = 0;
	min = stack->array[0];
	while (j < stack->in)
	{
		if (min > stack->array[j])
			min = stack->array[j];
		j++;
	}
	return (min);
}
