/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_stack_sort_not_min_top.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:51:14 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 13:42:28 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_stack_sort_not_min_top(t_stack *a)
{
	t_stack		*cpy_a;
	int			min;

	if ((cpy_a = ft_stack_cpy(a)) == NULL)
		return (-1);
	min = ft_stack_min_value(cpy_a);
	while (cpy_a->array[cpy_a->in - 1] != min)
		ft_stack_rotate(cpy_a);
	if (ft_is_stack_sort(cpy_a) == 1)
	{
		ft_stack_destroy(&cpy_a);
		return (1);
	}
	else
	{
		ft_stack_destroy(&cpy_a);
		return (0);
	}
}
