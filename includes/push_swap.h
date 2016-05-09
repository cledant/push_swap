/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 12:46:55 by cledant           #+#    #+#             */
/*   Updated: 2016/05/09 10:42:39 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct	s_stack
{
	int	*array;
	int	*filled;
	int	size;
	int	in;
}				t_stack;

int				ft_check_args(int argc, char **argv);
t_stack			*ft_stack_new(int len);
void			ft_stack_destroy(t_stack **stack);
void			ft_stack_fill_arg(t_stack *stack, int argc, char **argv);
void			ft_stack_display(t_stack *stack);
void			ft_stack_rotate(t_stack *stack);
void			ft_stack_rev_rotate(t_stack *stack);
void			ft_stack_rotate_both(t_stack *a, t_stack *b);
void			ft_stack_rev_rotate_both(t_stack *a, t_stack *b);
void			ft_stack_push(t_stack *dst, t_stack *src);
void			ft_stack_swap(t_stack *stack);
void			ft_stack_swap_both(t_stack *a, t_stack *b);
int				ft_atoi_2(const char *str);
int				ft_is_not_int(char *str);
size_t			ft_can_be_atoi_len(char *c);
int				ft_check_same(t_stack *stack);

#endif
