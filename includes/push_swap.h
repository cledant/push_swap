/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 12:46:55 by cledant           #+#    #+#             */
/*   Updated: 2016/05/06 12:51:27 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

int		ft_check_args(int argc, char **argv);
int		*ft_init_stack(int argc, char **argv);
int		ft_atoi_2(const char *str);
int		ft_is_not_int(char *str);
size_t	ft_can_be_atoi_len(char *c);
int		ft_check_same(int *stack, int len);

#endif
