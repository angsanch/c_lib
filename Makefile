# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angsanch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 17:29:25 by angsanch          #+#    #+#              #
#    Updated: 2024/06/13 17:36:19 by angsanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc

CFLAGS=-Wall -Werror -Wextra

C_FILES =

O_FILES = $(C_FILES:.c=.o)

LIB = libft/libft.a

NAME=

$(NAME): $(LIB) $(O_FILES)
	$(CC) $(CFLAGS) -o $(NAME) $(O_FILES) $(LIB)

all: $(NAME)

clean:
	make -C libft clean
	rm -f $(O_FILES) test_$(NAME)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

$(LIB):
	make -C libft

re: fclean all

.PHONY: all clean fclean re
