# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acauchy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/28 15:46:26 by acauchy           #+#    #+#              #
#    Updated: 2017/11/28 15:55:17 by acauchy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

FLAG = -Wall -Wextra -Werror

NAME = get_next_line

SRCS = get_next_line.c

OBJS = get_next_line.o

all: $(NAME)

libft:
	make -C libft/

$(NAME): libft
	$(CC) $(FLAG) -c $(SRCS) -I libft/includes
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
