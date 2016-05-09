/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rev_rotate_both.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:33:40 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 10:33:42 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_rev_rotate_both(t_stack *a, t_stack *b)
{
	ft_stack_rev_rotate(a);
	ft_stack_rev_rotate(b);
}
