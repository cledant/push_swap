/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_average.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:33:16 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 11:44:37 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_stack_average(t_stack *stack)
{
	double		all;
	double		average;
	int			i;

	i = 0;
	all = 0;
	while (i < stack->in)
	{
		all += stack->array[i];
		i++;
	}
	average = all / stack->in;
	return (average);
}
