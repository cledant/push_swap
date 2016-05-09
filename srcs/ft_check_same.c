/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_same.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 12:51:32 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 10:40:48 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_same(t_stack *stack)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < stack->size)
	{
		while (j < stack->size)
		{
			if (i != j && stack->array[i] == stack->array[j])
				return (-1);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
