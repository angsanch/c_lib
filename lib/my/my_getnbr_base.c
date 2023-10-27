/*
** EPITECH PROJECT, 2023
** my_getnbr_base.c
** File description:
** Strings to numbers
*/

#include "my.h"

static size_t my_strchr_index(const char *str, char c)
{
    size_t i = 0;

    while (str[i] != 0){
        if (str[i] == c)
            return (i);
        i ++;
    }
    return (-1);
}

int my_getnbr_base(char const *str, char const *base)
{
    int result = 0;
    int multiplicator = 1;
    size_t base_len = my_strlen(base);
    int power = 1;
    size_t i;

    if (str[0] == '-'){
        multiplicator = -1;
        str ++;
    }
    i = my_strlen(str) - 1;
    while (i + 1 > 0){
        result += my_strchr_index(base, str[i]) * power;
        power *= base_len;
        i --;
    }
    return (result * multiplicator);
}
