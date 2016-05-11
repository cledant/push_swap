/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_display_both.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 10:24:07 by cledant           #+#    #+#             */
/*   Updated: 2016/05/11 10:25:39 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_display_both(t_stack *a, t_stack *b)
{
	ft_putendl("STACK A : ");
	ft_putchar('\t');
	if (ft_stack_display(a) == 0)
		ft_putendl("");
	ft_putendl("STACK B : ");
	ft_putchar('\t');
	if (ft_stack_display(b) == 0)
		ft_putendl("");
}
