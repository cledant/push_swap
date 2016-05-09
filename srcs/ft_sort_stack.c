/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:52:57 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 18:51:22 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_stack(t_stack *a, t_stack *b)
{
	int		average;
	t_list	*list;

	list = NULL;
	if (ft_is_stack_sort(a) == 1)
		return (1);
	average = ft_stack_average(a);
	ft_putnbrendl(average);
	if (ft_sort_phase_1(a, b, average, &list) == -1)
	{
		if (list != NULL)
			ft_lstdel(&list, &ft_lstfree_malloc);
		return (-1);
	}
	ft_sort_display_list(list);
	if (list != NULL)
		ft_lstdel(&list, &ft_lstfree_malloc);
	return (1);
}
