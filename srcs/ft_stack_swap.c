/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:34:18 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 10:34:22 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_swap(t_stack *stack)
{
	int	tmp;

	if (stack->in == 0 || stack->in == 1)
		return ;
	tmp = stack->array[stack->in - 1];
	stack->array[stack->in - 1] = stack->array[stack->in - 2];
	stack->array[stack->in - 2] = tmp;
}
