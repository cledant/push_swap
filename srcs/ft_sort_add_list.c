/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_add_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 18:18:05 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 19:15:24 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sort_add_list(char *s, size_t size, t_list **list)
{
	t_list	*new;

	if ((new = ft_lstnew(s, size)) == NULL)
		return (-1);
	if (*list == NULL)
		*list = new;
	else
		ft_lstpushback(*list, new);
	return (1);
}
