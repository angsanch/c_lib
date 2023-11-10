##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Make library
##

CC=gcc

CFLAGS=-Werror -Wall -Wextra

C_FILES = src/my_strupcase.c \
 			src/my_getnbr.c \
 			src/my_str_islower.c \
 			src/my_str_to_word_array.c \
 			src/my_str_isnum.c \
 			src/my_strcpy.c \
 			src/my_put_nbr.c \
 			src/my_strcmp.c \
 			src/my_find_prime_sup.c \
 			src/my_isneg.c \
 			src/convert_base.c \
 			src/my_strlowcase.c \
 			src/my_show_word_array.c \
 			src/my_swap.c \
 			src/my_showstr.c \
 			src/my_compute_square_root.c \
 			src/my_strncmp.c \
 			src/my_str_isprintable.c \
 			src/my_showmem.c \
 			src/my_is_prime.c \
 			src/my_putstr.c \
 			src/my_strcat.c \
 			src/my_strncpy.c \
 			src/my_sort_int_array.c \
 			src/my_strdup.c \
 			src/my_strlen.c \
 			src/my_putchar.c \
 			src/my_strcapitalize.c \
 			src/my_getnbr_base.c \
 			src/my_strncat.c \
 			src/my_revstr.c \
 			src/my_strstr.c \
 			src/my_str_isalpha.c \
 			src/my_str_isupper.c \
 			src/my_putnbr_base.c \
 			src/my_compute_power_rec.c\
			src/my_memcmp.c \
			src/my_memset.c \
			src/my_strchr.c \
			src/my_strrchr.c \
			src/my_memcpy.c \
			src/printf/genericf.c \
			src/printf/my_printf.c \
			src/printf/parameter_utils.c \
			src/printf/utils1.c \
			src/printf/utils2.c \
			src/printf/utils3.c

O_FILES = $(C_FILES:.c=.o)

NAME=libmy.a

$(NAME): $(O_FILES)
	ar -rsc $(NAME) $(O_FILES)
	cp $(NAME) ../
	mkdir -p ../../include
	cp include/my.h ../../include

all: $(NAME)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
