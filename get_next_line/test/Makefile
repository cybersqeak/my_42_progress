# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmichele <cmichele@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/29 08:18:00 by cmichele          #+#    #+#              #
#    Updated: 2026/09/29 08:18:05 by cmichele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = test.a

CC = cc
CFLAGS = -Wall -Wextra -Werror


SRC=get_next_line.c \
	get_next_line_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
