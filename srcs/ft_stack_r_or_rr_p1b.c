/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1_in_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:52:06 by cledant           #+#    #+#             */
/*   Updated: 2016/05/12 19:23:09 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		ft_test(t_stack *a, t_stack *b, int way)
{
	int		val_b[2];
	int		nb;

	nb = 0;
	if (b->in == 0 || b->in == 1)
		return (0);
	else
	{
		while (1)
		{
			val_b[0] = ft_stack_min_value(b);
			val_b[1] = ft_stack_max_value(b);
			if (a->array[a->in - 1] < b->array[b->in - 1]
					&& a->array[a->in - 1] > b->array[0])
				return (nb);
			else if (a->array[a->in - 1] > val_b[1] &&
						b->array[b->in -1] == val_b[1])
			{
				nb++;
				return (nb);
			}
			else if (a->array[a->in - 1] < val_b[0] &&
						b->array[b->in -1] == val_b[0])
				return (nb);
			else
			{
				if (way == 0)
					ft_stack_rotate(b);
				else
					ft_stack_rev_rotate(b);
			}
		}
		return (nb);
	}
}

int				ft_stack_r_or_rr_p1b(t_stack *a, t_stack *b)
{
	t_stack		*cpy_a;
	t_stack		*cpy_b;
	int			value[2];

	if ((cpy_a = ft_stack_cpy(a)) == NULL)
		return (-1);
	if ((cpy_b = ft_stack_cpy(b)) == NULL)
		return (-1);
	value[0] = ft_test(cpy_a, cpy_b, 0);
	ft_stack_destroy(&cpy_b);
	if ((cpy_b = ft_stack_cpy(b)) == NULL)
		return (-1);
	value[1] = ft_test(cpy_a, cpy_b, 1);
	ft_stack_destroy(&cpy_b);
	ft_stack_destroy(&cpy_a);
	ft_putendl("CB AVEC ROTATE :");
	ft_putnbrendl(value[0]);
	ft_putendl("CB AVEC REV_ROTATE :");
	ft_putnbrendl(value[1]);
	if (value[0] >= value[1])
		return (0);
	else
		return (1);
}
