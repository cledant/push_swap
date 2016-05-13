/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1_in_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:52:06 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 12:54:32 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_phase_2(t_stack *a, t_stack *b, t_list **list)
{
	int	way;

	while (b->in != 0)
	{
		if((way = ft_sort_r_or_rr_p21(a, b)) == -1)
			return (-1);
		if (way == 1)
		{
			if (ft_sort_phase_2_1_r(a, b, list) == -1)
				return (-1);
		}
		else
		{
			if (ft_sort_phase_2_1_rr(a, b, list) == -1)
				return (-1);
		}
	}
	return (1);
}
