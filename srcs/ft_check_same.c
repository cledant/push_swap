/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_same.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 12:51:32 by cledant           #+#    #+#             */
/*   Updated: 2016/05/06 13:01:43 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_same(int *stack, int len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while(i < len)
	{
		while (j < len)
		{
			if (i != j && stack[i] == stack[j])
				return(-1);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
