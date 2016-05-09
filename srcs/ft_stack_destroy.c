/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:31:04 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 10:31:07 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_destroy(t_stack **stack)
{
	free((*stack)->array);
	free((*stack)->filled);
	free(*stack);
	stack = NULL;
}
