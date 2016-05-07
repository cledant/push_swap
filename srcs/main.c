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
	t_stack		*stack_a;
	t_stack		*stack_b;

	if ((check = ft_check_args(argc, argv)) == -1)
	{
		ft_putendl_fd("Error 1", 2);
		return (-1);
	}
	if ((stack_a = ft_stack_new(argc - 1)) == NULL)
	{
		ft_putendl_fd("Error 2", 2);
		return (-1);
	}
	if ((stack_b = ft_stack_new(argc - 1)) == NULL)
	{
		ft_putendl_fd("Error 2", 2);
		return (-1);
	}
	ft_stack_fill_arg(stack_a, argc, argv);
	if (ft_check_same(stack_a) == -1)
	{
		free(stack_a);
		ft_putendl_fd("Error 3", 2);
		return (-1);
	}
	ft_stack_rotate(stack_a);
	ft_stack_rotate(stack_a);
	ft_stack_display(stack_a);
	ft_stack_destroy(&stack_a);
	ft_stack_destroy(&stack_b);
	return (0);
}
