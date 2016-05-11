/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:52:57 by cledant           #+#    #+#             */
/*   Updated: 2016/05/11 19:43:55 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_stack(t_stack *a, t_stack *b)
{
	t_list	*list;

	list = NULL;
	if (ft_is_stack_sort(a) == 1)
		return (1);
	if (a->in == 2)
	{
		ft_stack_rotate(a);
		if (ft_sort_add_list("ra", 3, &list) == -1)
			return (-1);
	}
	else
	{
		if (ft_sort_phase_1(a, b, &list) == -1)
		{
			if (list != NULL)
				ft_lstdel(&list, &ft_lstfree_malloc);
			return (-1);
		}
	}
//	if (ft_is_stack_sort(a) != 1)
//	{
//		if (ft_sort_min_first(a, &list) == -1)
//			return (-1);
//		ft_stack_display_both(a, b);
//		if (ft_sort_phase_2_1(a, b, &list) == -1)
//		{
//			if (list != NULL)
//				ft_lstdel(&list, &ft_lstfree_malloc);
//			return (-1);
//		}
//	}
//	if (ft_sort_min_first(a, &list) == -1)
//		return (-1);
	ft_stack_display_both(a, b);
	ft_sort_display_list(list);
	if (list != NULL)
		ft_lstdel(&list, &ft_lstfree_malloc);
	return (1);
}
