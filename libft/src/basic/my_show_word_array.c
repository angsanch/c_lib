/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_show_word_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:46:39 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:46:39 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/basic_utils.h"

void my_show_word_array(char *const *tab)
{
    size_t i = 0;

    while (tab[i] != 0){
        my_putstr(tab[i]);
        my_putchar('\n');
        i ++;
    }
}
