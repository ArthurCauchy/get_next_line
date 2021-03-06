# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acauchy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 15:57:30 by acauchy           #+#    #+#              #
#    Updated: 2017/11/25 10:38:59 by acauchy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC_DIR = .

HEADERS = ./includes

CFILES = $(SRC_DIR)/ft_memset.c \
		 $(SRC_DIR)/ft_bzero.c \
		 $(SRC_DIR)/ft_memcpy.c \
		 $(SRC_DIR)/ft_memccpy.c \
		 $(SRC_DIR)/ft_memmove.c \
		 $(SRC_DIR)/ft_memchr.c \
		 $(SRC_DIR)/ft_memcmp.c \
		 $(SRC_DIR)/ft_strlen.c \
		 $(SRC_DIR)/ft_strdup.c \
		 $(SRC_DIR)/ft_strcpy.c \
		 $(SRC_DIR)/ft_strncpy.c \
		 $(SRC_DIR)/ft_strcat.c \
		 $(SRC_DIR)/ft_strncat.c \
		 $(SRC_DIR)/ft_strlcat.c \
		 $(SRC_DIR)/ft_strchr.c \
		 $(SRC_DIR)/ft_strrchr.c \
		 $(SRC_DIR)/ft_strstr.c \
		 $(SRC_DIR)/ft_strnstr.c \
		 $(SRC_DIR)/ft_strcmp.c \
		 $(SRC_DIR)/ft_strncmp.c \
		 $(SRC_DIR)/ft_atoi.c \
		 $(SRC_DIR)/ft_islower.c \
		 $(SRC_DIR)/ft_isupper.c \
		 $(SRC_DIR)/ft_isalpha.c \
		 $(SRC_DIR)/ft_isspace.c \
		 $(SRC_DIR)/ft_isdigit.c \
		 $(SRC_DIR)/ft_isalnum.c \
		 $(SRC_DIR)/ft_isascii.c \
		 $(SRC_DIR)/ft_isprint.c \
		 $(SRC_DIR)/ft_memalloc.c \
		 $(SRC_DIR)/ft_memdel.c \
		 $(SRC_DIR)/ft_strnew.c \
		 $(SRC_DIR)/ft_strdel.c \
		 $(SRC_DIR)/ft_strclr.c \
		 $(SRC_DIR)/ft_striter.c \
		 $(SRC_DIR)/ft_striteri.c \
		 $(SRC_DIR)/ft_strmap.c \
		 $(SRC_DIR)/ft_strmapi.c \
		 $(SRC_DIR)/ft_strequ.c \
		 $(SRC_DIR)/ft_strnequ.c \
		 $(SRC_DIR)/ft_strsub.c \
		 $(SRC_DIR)/ft_strjoin.c \
		 $(SRC_DIR)/ft_strtrim.c \
		 $(SRC_DIR)/ft_strsplit.c \
		 $(SRC_DIR)/ft_itoa.c \
		 $(SRC_DIR)/ft_toupper.c \
		 $(SRC_DIR)/ft_tolower.c \
		 $(SRC_DIR)/ft_putchar.c \
		 $(SRC_DIR)/ft_putstr.c \
		 $(SRC_DIR)/ft_putendl.c \
		 $(SRC_DIR)/ft_putnbr.c \
		 $(SRC_DIR)/ft_puthex.c \
		 $(SRC_DIR)/ft_putchar_fd.c \
		 $(SRC_DIR)/ft_putstr_fd.c \
		 $(SRC_DIR)/ft_putendl_fd.c \
		 $(SRC_DIR)/ft_putnbr_fd.c \
		 $(SRC_DIR)/ft_puthex_fd.c \
		 $(SRC_DIR)/ft_lstnew.c \
		 $(SRC_DIR)/ft_lstadd.c \
		 $(SRC_DIR)/ft_lstpushback.c \
		 $(SRC_DIR)/ft_lstdelone.c \
		 $(SRC_DIR)/ft_lstdel.c \
		 $(SRC_DIR)/ft_lstiter.c \
		 $(SRC_DIR)/ft_lstmap.c \
		 $(SRC_DIR)/ft_swap.c

OFILES = ft_memset.o \
		 ft_bzero.o \
		 ft_memcpy.o \
		 ft_memccpy.o \
		 ft_memmove.o \
		 ft_memchr.o \
		 ft_memcmp.o \
		 ft_strlen.o \
		 ft_strdup.o \
		 ft_strcpy.o \
		 ft_strncpy.o \
		 ft_strcat.o \
		 ft_strncat.o \
		 ft_strlcat.o \
		 ft_strchr.o \
		 ft_strrchr.o \
		 ft_strstr.o \
		 ft_strnstr.o \
		 ft_strcmp.o \
		 ft_strncmp.o \
		 ft_atoi.o \
		 ft_islower.o \
		 ft_isupper.o \
		 ft_isalpha.o \
		 ft_isspace.o \
		 ft_isdigit.o \
		 ft_isalnum.o \
		 ft_isascii.o \
		 ft_isprint.o \
		 ft_memalloc.o \
		 ft_memdel.o \
		 ft_strnew.o \
		 ft_strdel.o \
		 ft_strclr.o \
		 ft_striter.o \
		 ft_striteri.o \
		 ft_strmap.o \
		 ft_strmapi.o \
		 ft_strequ.o \
		 ft_strnequ.o \
		 ft_strsub.o \
		 ft_strjoin.o \
		 ft_strtrim.o \
		 ft_strsplit.o \
		 ft_itoa.o \
		 ft_toupper.o \
		 ft_tolower.o \
		 ft_putchar.o \
		 ft_putstr.o \
		 ft_putendl.o \
		 ft_putnbr.o \
		 ft_puthex.o \
		 ft_putchar_fd.o \
		 ft_putstr_fd.o \
		 ft_putendl_fd.o \
		 ft_putnbr_fd.o \
		 ft_puthex_fd.o \
		 ft_lstnew.o \
		 ft_lstadd.o \
		 ft_lstpushback.o \
		 ft_lstdelone.o \
		 ft_lstdel.o \
		 ft_lstiter.o \
		 ft_lstmap.o \
		 ft_swap.o

all: $(NAME)
$(NAME):
	$(CC) $(FLAG) -c $(CFILES) -I$(HEADERS)
	ar rc $(NAME) $(OFILES)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
