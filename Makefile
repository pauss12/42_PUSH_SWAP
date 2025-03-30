# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 14:44:51 by pmendez-          #+#    #+#              #
#    Updated: 2024/03/02 18:12:28 by pmendez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address,leak

FILES = push_swap.c \
		checker_elements.c \
		transforme.c \
		utils.c \
		stack_lists.c \
		algorithm.c \
		moves_swap.c \
		moves_push.c \
		moves_rotate.c \
		moves_reverse_rotate.c \
		check_max_mins.c \
		general_moves.c \
		ksort.c \
		sort_five_numbers.c \
		

OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) push_swap.h
	@make -C libft
	gcc $(OBJS) libft/libft.a $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)
	@make fclean -C libft

fclean: clean
	rm -f $(NAME)
	rm -f push_swap
	rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re
