/*
** EPITECH PROJECT, 2024
** my_coolersplit_utils.c
** File description:
** Utils for coolersplit
*/

#include "../../include/basic_utils.h"

void copy_without_quotations(char *dst, char const *src, size_t n)
{
    size_t d = 0;
    size_t s = 0;
    char p_block = 0;
    char block = 0;
    char l;

    while (s < n) {
        p_block = block;
        l = src[s];
        if (block == 0 && (l == '\'' || l == '\"')) {
            block = l;
            l = 0;
        }
        block = (block == l) ? 0 : block;
        if (p_block == block)
            dst[d] = src[s];
        d += p_block == block;
        s ++;
    }
    dst[d] = '\0';
}

void *delete_splited_t(splited_t *spl, int delete_result)
{
    if (spl == NULL)
        return (NULL);
    if (delete_result)
        free_string_array(spl->result);
    return (NULL);
}
