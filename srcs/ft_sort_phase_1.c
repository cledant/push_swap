/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:18:55 by cledant           #+#    #+#             */
/*   Updated: 2016/05/11 10:40:20 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_phase_1(t_stack *a, t_stack *b, int average, t_list **list)
{
	int		i;
	
	i = a->in;
	while (i > 0)
	{
		if (a->array[a->in - 1] >= average)
		{
			if (ft_sort_phase_1_in_b(a, b, list) == -1)
				return (-1);
		}
		else
		{
			ft_stack_rotate(a);
			if (ft_sort_add_list("ra", 3, list) == -1)
				return (-1);
		}
		i--;
		ft_stack_display_both(a, b);
	}
	return (1);
}
