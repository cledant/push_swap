/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:18:55 by cledant           #+#    #+#             */
/*   Updated: 2016/05/12 09:43:30 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_phase_1(t_stack *a, t_stack *b, t_list **list)
{
	int		i;
	int		val[2];
	
	i = a->in;
	val[0] = ft_stack_min_value(a);
	val[1] = ft_stack_max_value(a);
	while (i > 0 && a->in > 2)
	{
		if (a->array[a->in - 1] == val[0] &&
				a->array[a->in - 2] > a->array[a->in - 3])
		{
			ft_stack_rotate(a);
			if (ft_sort_add_list("ra", 3, list) == -1)
				return (-1);
			ft_stack_display_both(a, b);
			i--;
			if (ft_sort_phase_1_in_b(a, b, list) == -1)
				return (-1);
		}
		else if (a->array[a->in - 1] < a->array[0] ||
					a->array[a->in - 1] > a->array[a->in - 2])
		{
			if (ft_sort_phase_1_in_b(a, b, list) == -1)
				return (-1);
		}
		else
		{
			ft_stack_rotate(a);
			if (ft_sort_add_list("ra", 3, list) == -1)
				return (-1);
			ft_stack_display_both(a, b);
		}
		i--;
	}
	return (1);
}
