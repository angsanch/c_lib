/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:57:13 by angsanch          #+#    #+#             */
/*   Updated: 2024/10/18 09:57:19 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/basic.h"

void	my_strtrim(char *str)
{
	size_t	offset;
	size_t	len;

	offset = 0;
	len = my_strlen(&str[offset]);
	while (str[offset] == ' ' || !my_isprintable(str[offset]))
		offset ++;
	len -= offset + 1;
	my_memmove(str, &str[offset], len + 1);
	while (str[len] == ' ' || !my_isprintable(str[len]))
		len --;
	str[len + 1] = '\0';
}
