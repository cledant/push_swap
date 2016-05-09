/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_stack_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:07:43 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 11:25:06 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_stack_sort(t_stack *stack)
{
	int		i;

	if (stack->in == 0 || stack->in == 1)
		return (1);
	i = stack->in - 1;
	while (i != 1)
	{
		if (stack->array[i - 1] < stack->array[i - 2])
			i--;
		else
			return (0);
	}
	return (1);
}
