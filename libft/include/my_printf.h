/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:49:16 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:49:16 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

int my_printf(char const *format, ...);
int my_sprintf(char *str, char const *format, ...);
int my_dprintf(int fd, char const *format, ...);
int my_sbufferf(char **str, char const *format, ...);

#endif
