/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 10:11:13 by cledant           #+#    #+#             */
/*   Updated: 2016/05/06 13:15:04 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	 main(int argc, char **argv)
{
	int		check;
	int		*stack_a;
	int		i;

	i = argc - 2;
	if ((check = ft_check_args(argc, argv)) == -1)
	{
		ft_putendl_fd("Error 1", 2);
		return (-1);
	}
	if ((stack_a = ft_init_stack(argc, argv)) == NULL)
	{
		ft_putendl_fd("Error 2", 2);
		return (-1);
	}
	if (ft_check_same(stack_a, argc - 1) == -1)
	{
		free(stack_a);
		ft_putendl_fd("Error 3", 2);
		return (-1);
	}
	while (i >= 0)
	{
		ft_putnbr(stack_a[i]);
		ft_putstr(" ");
		i--;
	}
	return (0);
}
