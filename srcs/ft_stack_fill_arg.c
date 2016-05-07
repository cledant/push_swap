/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 12:26:45 by cledant           #+#    #+#             */
/*   Updated: 2016/05/06 13:20:36 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_stack_fill_arg(t_stack *stack, int argc, char **argv)
{
	int		i;

	i = 0;
	while (i < argc - 1)
	{
		stack->array[argc - 2 - i] = ft_atoi_2(argv[i + 1]);
		stack->filled[argc - 2 - i] = 1;
		stack->in += 1;
		i++;
	}
}
