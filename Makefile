# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cledant <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 10:40:13 by cledant           #+#    #+#              #
#    Updated: 2016/05/12 13:13:19 by cledant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INCLUDES = ./includes

INCLUDES_LIBFT = ./libft/includes

LIBFT_PATH = ./libft

SRC_NAME =	main.c ft_check_args.c ft_stack_new.c ft_atoi_2.c ft_is_not_int.c \
			ft_can_be_atoi_len.c ft_check_same.c ft_stack_destroy.c \
			ft_stack_fill_arg.c ft_stack_display.c ft_stack_rotate.c \
			ft_stack_rev_rotate.c ft_stack_rotate_both.c \
			ft_stack_rev_rotate_both.c ft_stack_push.c ft_stack_swap.c \
			ft_stack_swap_both.c ft_sort_stack.c ft_is_stack_sort.c \
			ft_stack_average.c ft_sort_phase_1.c ft_sort_phase_1_in_b.c \
			ft_sort_min_first.c ft_sort_add_list.c ft_sort_display_list.c \
			ft_sort_phase_2.c ft_stack_display_both.c ft_stack_min_value.c \
			ft_stack_max_value.c

SRC_PATH = ./srcs/

SRC =	$(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ =	$(SRC_NAME:.c=.o)

NAME = push_swap

all :	libft $(NAME)

libft :
	make -C $(LIBFT_PATH)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS) -lft -I$(INCLUDES) -I$(INCLUDES_LIBFT) -L$(LIBFT_PATH)

$(OBJ) :
	$(CC) -c $(SRC) $(CFLAGS) -I$(INCLUDES) -I$(INCLUDES_LIBFT)

clean :
	rm -rf $(OBJ)
	make -C $(LIBFT_PATH) clean

fclean : clean
	rm -rf $(NAME)
	make -C $(LIBFT_PATH) fclean

re : fclean all

.PHONY : all clean fclean re libft
