/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:36:27 by cledant           #+#    #+#             */
/*   Updated: 2016/05/12 15:03:19 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static inline void		ft_rotate_1(t_stack *stack, int (*tmp)[2], int i)
{
	(*tmp)[1] = stack->array[i];
	stack->array[i] = (*tmp)[0];
	(*tmp)[0] = (*tmp)[1];
}

static inline void		ft_rotate_2(t_stack *stack, int (*tmp)[2], int i)
{
	(*tmp)[1] = stack->array[i];
	stack->array[i] = (*tmp)[0];
	stack->array[0] = (*tmp)[1];
}

void					ft_stack_rotate(t_stack *stack)
{
	int	i;
	int	tmp[2];

	ft_bzero(tmp, sizeof(int) * 2);
	if (stack->in == 0 || stack->in == 1)
		return ;
	i = 1;
	tmp[0] = stack->array[0];
	while (i < stack->in)
	{
		if (i != stack->in - 1)
			ft_rotate_1(stack, &tmp, i);
		else
			ft_rotate_2(stack, &tmp, i);
		i++;
	}
}
