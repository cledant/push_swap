/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_cpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 19:14:29 by cledant           #+#    #+#             */
/*   Updated: 2016/05/12 19:18:59 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*ft_stack_cpy(t_stack *stack)
{
	t_stack		*new;
	int			i;

	if ((new = (t_stack *)malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	if ((new->array = (int *)malloc(stack->size * sizeof(int))) == NULL)
	{
		free(new);
		return (NULL);
	}
	new->size = stack->size;
	new->in = stack->in;
	i = 0;
	while (i < stack->size)
	{
		new->array[i] = stack->array[i];
		i++;
	}
	return (new);
}
