/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_2_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 09:47:32 by cledant           #+#    #+#             */
/*   Updated: 2016/05/11 16:32:58 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_phase_2_1(t_stack *a, t_stack *b, t_list **list)
{
	int		i;
	int		in_b;
	int		max;
	int		flag;
	
	flag = 0;
	i = 0;
	max = a->in;
	in_b = 0;
	while (i < max)
	{
		if ((flag == 0 || i != max - 1)  && a->in >= 2 &&
				a->array[a->in - 1] > a->array[a->in - 2])
		{
			ft_stack_push(b, a);
			if (ft_sort_add_list("pb", 3, list) == -1)
				return (-1);
			flag = 1;
			max--;
		}
		else if (flag != 0 && a->in >= 2 &&
					a->array[a->in - 1] > a->array[a->in - 2])
		{
			ft_stack_rotate(a);
			if (ft_sort_add_list("ra", 3, list) == -1)
				return (-1);
			ft_stack_push(b, a);
			if (ft_sort_add_list("pb", 3, list) == -1)
				return (-1);
			max--;
		}
		else if (a->in >= 2)
		{
			ft_stack_rotate(a);
			if (ft_sort_add_list("ra", 3, list) == -1)
				return (-1);
			flag = 1;
		}
		i++;
		ft_stack_display_both(a, b);
	}
	return (1);
}
