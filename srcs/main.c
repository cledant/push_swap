/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 10:11:13 by cledant           #+#    #+#             */
/*   Updated: 2016/05/06 11:14:16 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	 main(int argc, char **argv)
{
	int		check;
	int		*stack_a;

	if ((check = ft_check_args(argc, argv)) == -1)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	if ((stack_a = ft_init_stack(argc, argv)) == NULL)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	if (ft_check_same(stack_a) == -1)
	{
		free(stack_a);
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	return (0);
}
