/*
** EPITECH PROJECT, 2024
** pointer_arrays.c
** File description:
** Functions to manage pointer arrays
*/

#include <stdlib.h>

size_t get_pointer_array_len(void *arr_in)
{
    size_t i = 0;
    void **arr = arr_in;

    for (; arr[i]; i++);
    return (i);
}

char **free_string_array(char **result)
{
    int i = 0;

    if (result == NULL)
        return (NULL);
    while (result[i]){
        free(result[i]);
        i ++;
    }
    free(result);
    return (NULL);
}
