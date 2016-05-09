/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_display.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:31:44 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 10:41:36 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_display(t_stack *stack)
{
	int	i;

	i = stack->size;
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
}
