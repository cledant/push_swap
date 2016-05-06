/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 10:25:27 by cledant           #+#    #+#             */
/*   Updated: 2016/05/06 11:14:13 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_args(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
		return (-1);
	while (i < argc)
	{
		if (ft_can_be_atoi(argv[i]) == 0)
			return (-1);
		if (ft_is_not_int(argv[i]) == 1)
			return (-1);
		i++;
	}
	return (1);
}
