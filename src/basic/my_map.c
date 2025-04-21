/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:54:26 by angsanch          #+#    #+#             */
/*   Updated: 2025/04/21 22:18:08 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/basic.h"

double	my_map(double n, t_doublepair base, t_doublepair new)
{
	return ((((n - base.a) / (base.b - base.a)) * (new.b - new.a)) + new.a);
}
