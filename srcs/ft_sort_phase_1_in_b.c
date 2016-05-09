/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1_in_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:52:06 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 19:12:51 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_phase_1_in_b(t_stack *a, t_stack *b, t_list **list)
{
	int		i;

	if (b->in == 0)
	{
		ft_stack_push(b, a);
		if (ft_sort_add_list("pb", 3, list) == -1)
			return (-1);
		return (1);
	}
	else if (b->in == 1)
	{
		ft_stack_push(b, a);
		if (ft_sort_add_list("pb", 3, list) == -1)
			return (-1);
		if (ft_sort_min_first(b, list) == -1)
			return (-1);
		return (1);
	}
	else
	{
		i = b->in;
		while (i > 0)
		{
			if (a->array[a->in - 1] > b->array[b->in - 1])
			{
				ft_stack_rotate(b);
				if (ft_sort_add_list("rb", 3, list) == -1)
					return (-1);
			}
			else
			{
				ft_stack_push(b, a);
				if (ft_sort_add_list("pb", 3, list) == -1)
					return (-1);
				if (ft_sort_min_first(b, list) == -1)
					return (-1);
				return (1);
			}
			i--;
		}
		ft_stack_push(b, a);
		if (ft_sort_add_list("pb", 3, list) == -1)
			return (-1);
		if (ft_sort_min_first(b, list) == -1)
			return (-1);
		return (1);
	}
}
