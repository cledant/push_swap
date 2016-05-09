/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_display_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 18:38:44 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 19:16:25 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_display_list(t_list *list)
{
	t_list	*cpy_lst;

	cpy_lst = list;
	while (cpy_lst != NULL)
	{
		if (cpy_lst->next != NULL)
		{
			ft_putstr(cpy_lst->content);
			ft_putchar(' ');
		}
		else
			ft_putendl(cpy_lst->content);
		cpy_lst = cpy_lst->next;
	}
}
