/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_display.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:31:44 by cledant           #+#    #+#             */
/*   Updated: 2016/05/12 15:02:17 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_stack_display(t_stack *stack)
{
	int	i;

	if (stack->in == 0)
		return (0);
	i = stack->in - 1;
	while (i >= 0)
	{
		if (i != 0)
		{
			ft_putnbr(stack->array[i]);
			ft_putstr(" ");
		}
		else
			ft_putnbrendl(stack->array[i]);
		i--;
	}
	return (1);
}
