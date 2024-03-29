/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 12:46:55 by cledant           #+#    #+#             */
/*   Updated: 2016/05/13 19:28:29 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct	s_stack
{
	int			*array;
	int			size;
	int			in;
}				t_stack;

int				ft_check_args(int argc, char **argv, int *debug);
t_stack			*ft_stack_new(int len);
t_stack			*ft_stack_cpy(t_stack *stack);
void			ft_stack_destroy(t_stack **stack);
void			ft_stack_fill_arg(t_stack *stack, int argc, char **argv,
					int debug);
int				ft_stack_display(t_stack *stack);
void			ft_stack_display_both(t_stack *a, t_stack *b);
void			ft_stack_rotate(t_stack *stack);
void			ft_stack_rev_rotate(t_stack *stack);
void			ft_stack_rotate_both(t_stack *a, t_stack *b);
void			ft_stack_rev_rotate_both(t_stack *a, t_stack *b);
void			ft_stack_push(t_stack *dst, t_stack *src);
void			ft_stack_swap(t_stack *stack);
void			ft_stack_swap_both(t_stack *a, t_stack *b);
int				ft_stack_min_value(t_stack *stack);
int				ft_stack_max_value(t_stack *stack);
int				ft_sort_stack(t_stack *a, t_stack *b, int debug);
int				ft_sort_phase_1(t_stack *a, t_stack *b, t_list **list,
					int debug);
int				ft_sort_phase_1_in_b(t_stack *a, t_stack *b, t_list **list,
					int debug);
int				ft_sort_r_or_rr_p1b(t_stack *a, t_stack *b);
int				ft_sort_phase_1_try_swap(t_stack *a);
int				ft_sort_phase_2(t_stack *a, t_stack *b, t_list **list,
					int debug);
int				ft_sort_r_or_rr_p21(t_stack *a, t_stack *b);
int				ft_sort_phase_2_1_r(t_stack *a, t_stack *b, t_list **list,
					int debug);
int				ft_sort_phase_2_1_rr(t_stack *a, t_stack *b, t_list **list,
					int debug);
int				ft_sort_min_first_a(t_stack *sort, t_stack *disp,
					t_list **list, int debug);
int				ft_sort_add_list(char *s, size_t size, t_list **list);
void			ft_sort_display_list(t_list *list);
int				ft_is_stack_sort_not_min_top(t_stack *a);
int				ft_is_stack_sort(t_stack *stack);
int				ft_is_not_int(char *str);
int				ft_atoi_2(const char *str);
size_t			ft_can_be_atoi_len(char *c);
int				ft_check_same(t_stack *stack);

#endif
