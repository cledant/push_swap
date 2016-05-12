/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1_in_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:52:06 by cledant           #+#    #+#             */
/*   Updated: 2016/05/12 13:18:20 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		ft_test(t_stack *a, t_stack *b, int way)
{
	int		val_a[2];
	int		nb;

	nb = 0;
	if (a->in == 0 || a->in == 1)
		return (nb);
	else
	{
		while (1)
		{
			val_a[0] = ft_stack_min_value(a);
			val_a[1] = ft_stack_max_value(a);
			if (b->array[b->in - 1] < a->array[a->in - 1]
					&& b->array[b->in - 1] > a->array[0])
				return (nb);
			else if (b->array[b->in - 1] > val_a[1] &&
						a->array[a->in -1] == val_a[1])
				return (nb);
			else if (b->array[b->in - 1] < val_a[0] &&
						a->array[a->in -1] == val_a[0])
				return (nb);
			else
			{
				if (way == 0)
					ft_stack_rotate(a);
				else
					ft_stack_rev_rotate(a);
				nb++;
			}
		}
		return (nb);
	}
}

int			ft_stack_r_or_rr_p21(t_stack *a, t_stack *b)
{
	t_stack
}
