/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_phase_1_try_swap.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 11:30:06 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 11:46:52 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_phase_1_try_swap(t_stack *a)
{
	t_stack		*cpy_a;
	int			sort;

	if ((cpy_a = ft_stack_cpy(a)) == NULL)
		return (-1);
	ft_stack_swap(cpy_a);
	if ((sort = ft_is_stack_sort_not_min_top(cpy_a)) == -1)
	{
		ft_stack_destroy(&cpy_a);
		return (-1);
	}
	else
	{
		ft_stack_destroy(&cpy_a);
		return (sort);
	}
}
