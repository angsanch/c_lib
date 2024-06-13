/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:46:25 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:46:25 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int my_memchr_index(const void *m, int c, int len)
{
    int i = 0;
    unsigned char chr = c;
    const char *s = m;

    while (i < len){
        if (s[i] == chr)
            break;
        i ++;
    }
    if (i >= len)
        return (-1);
    if (s[i] == chr)
        return (i);
    else
        return (-1);
}
