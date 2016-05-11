/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_display.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:31:44 by cledant           #+#    #+#             */
/*   Updated: 2016/05/11 10:16:11 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_stack_display(t_stack *stack)
{
	int	i;

	i = stack->size;
	if (stack->in == 0)
		return (0);
	while (i >= 0)
	{
		if (stack->filled[i] == 1)
		{
			if (i != 0)
			{
				ft_putnbr(stack->array[i]);
				ft_putstr(" ");
			}
			else
				ft_putnbrendl(stack->array[i]);
		}
		i--;
	}
	return (1);
}
