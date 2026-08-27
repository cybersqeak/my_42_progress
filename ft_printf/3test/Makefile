# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/26 11:47:26 by cmichele          #+#    #+#              #
#    Updated: 2026/08/27 09:13:24 by cmichele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_itoa.c \
	  unsigneditoa.c \
	  ft_printf.c \
	  unsigned_write.c \
	  uphex_write.c \
	  hex_write.c \
	  write_char.c \
	  write_digits.c \
	  pointer_write.c \
	  per_write.c \
	  writing.c \
	  ft_strlen.c \
	  check_specifier.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
