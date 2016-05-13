/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 10:11:13 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 19:41:53 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_exit_error(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a != NULL)
		ft_stack_destroy(stack_a);
	if (*stack_b != NULL)
		ft_stack_destroy(stack_b);
	ft_putendl_fd("Error", 2);
	exit(-1);
}

int				main(int argc, char **argv)
{
	int			check;
	int			debug;
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	debug = 0;
	if ((check = ft_check_args(argc, argv, &debug)) == -1)
		ft_exit_error(&stack_a, &stack_b);
	if ((stack_a = ft_stack_new(argc - 1)) == NULL)
		ft_exit_error(&stack_a, &stack_b);
	if ((stack_b = ft_stack_new(argc - 1)) == NULL)
		ft_exit_error(&stack_a, &stack_b);
	ft_stack_fill_arg(stack_a, argc, argv, debug);
	if (ft_check_same(stack_a) == -1)
		ft_exit_error(&stack_a, &stack_b);
	if (ft_sort_stack(stack_a, stack_b, debug) == -1)
		ft_exit_error(&stack_a, &stack_b);
	ft_stack_destroy(&stack_a);
	ft_stack_destroy(&stack_b);
	return (0);
}
