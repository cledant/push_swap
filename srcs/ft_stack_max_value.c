/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_max_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 12:46:01 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 12:46:04 by cledant          ###   ########.fr       */
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
