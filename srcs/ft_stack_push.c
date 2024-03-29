/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:33:18 by cledant           #+#    #+#             */
/*   Updated: 2016/05/12 14:08:22 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_push(t_stack *dst, t_stack *src)
{
	if (src->in == 0 || dst->size == dst->in)
		return ;
	dst->array[dst->in] = src->array[src->in - 1];
	src->array[src->in - 1] = 0;
	src->in -= 1;
	dst->in += 1;
}
