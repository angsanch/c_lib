/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:49:17 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 20:12:51 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_PRINTF_UTILS_H
# define MY_PRINTF_UTILS_H

# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>
# include "linked_list.h"
# include "basic.h"

//flags "-+ #0"
typedef struct data_parameter
{
	char	specifier;
	bool	flags[5];
	int		width;
	int		precision;
	int		length;
	size_t	characters;
	char	*str;
}	t_parameter;

int			my_printf(char const *format, ...);
char		*genericf(char const *format, va_list *ap);
t_parameter	*parse_parameter(char const *format, int *i);
void		destroy_param(t_parameter *p);
char		*prepare_parts(t_parameter *param, char *sign, char *number);
void		set_base(char specifier, char *base);
void		set_sign(t_parameter *param, int plus, char *sign);
char		*my_lluitoa_base(unsigned long long int nb, char const *base,
				int min_len);

char		*signed_decimal_integer(t_parameter *param, va_list *ap, int n);
char		*unsigned_decimal_integer(t_parameter *param, va_list *ap, int n);
char		*print_float(t_parameter *param, va_list *ap, int n);
char		*length_exporter(t_parameter *param, va_list *ap, int n);
char		*character_print(t_parameter *param, va_list *ap, int n);
char		*string_print(t_parameter *param, va_list *ap, int n);
char		*pointer_print(t_parameter *param, va_list *ap, int n);
char		*length_exporter(t_parameter *param, va_list *ap, int n);
char		*print_percentage(t_parameter *param, va_list *ap, int n);

#endif
