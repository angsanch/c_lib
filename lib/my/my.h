/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** Lib
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdlib.h>
    #include <unistd.h>

void my_putchar(char c);
int my_isneg(int nb);
void my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, size_t size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, size_t n);
void swap_chr(char *a, char *b);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, size_t n);
char *my_strupcase(char *str);
void my_to_upper(char *chr);
char *my_strlowcase(char *str);
void my_to_lower(char *chr);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_isalpha(char c);
int my_str_isnum(char const *str);
int my_isnumeric(char c);
int my_str_islower(char const *str);
int my_islower(char c);
int my_str_isupper(char const *str);
int my_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_isprintable(char c);
void my_showstr(char const *str);
void my_showmem(char const *str, size_t size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, size_t nb);
char *my_strdup(char const *src);
char **my_str_to_word_array(char const *str);
void my_show_word_array(char *const *tab);
int my_putnbr_base(int nbr, char const *base);
int my_getnbr_base(char const *str, char const *base);
char *convert_base(char const *nbr,
    char const *base_from, char const *base_to);
int my_memcmp(const char *s1, const char *s2, int n);
void *my_memset(void *b, int c, size_t len);

#endif
