/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:33:08 by cledant           #+#    #+#             */
/*   Updated: 2016/05/12 14:04:59 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*ft_stack_new(int len)
{
	t_stack		*new;

	if ((new = (t_stack *)malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	if ((new->array = (int *)malloc(len * sizeof(int))) == NULL)
	{
		free(new);
		return (NULL);
	}
	new->size = len;
	new->in = 0;
	ft_bzero(new->array, sizeof(int) * len);
	return (new);
}
