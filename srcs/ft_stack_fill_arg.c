/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_fill_arg.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:32:57 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 18:21:05 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_stack_fill_arg(t_stack *stack, int argc, char **argv, int debug)
{
	int		i;

	i = 0;
	if (debug == 1)
		i++;
	while (i < argc - 1)
	{
		stack->array[argc - 2 - i] = ft_atoi_2(argv[i + 1]);
		stack->in += 1;
		i++;
	}
}
