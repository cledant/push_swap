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

int		*ft_init_stack(int argc, char **argv)
{
	int		*stack;
	int		i;

	i = 0;
	if ((stack = (int *)malloc((argc - 1) * sizeof(int))) == NULL)
		return (NULL);
	ft_bzero(stack, (argc - 1) * sizeof(int));
	while (i < argc - 1)
	{
		stack[argc - 2 - i] = ft_atoi_2(argv[i + 1]);
		i++;
	}
	return (stack);
}
