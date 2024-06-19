/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_find_prime_sup.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:46:20 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:46:20 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/basic_utils.h"

int	my_find_prime_sup(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb ++;
	while (!my_is_prime(nb))
		nb += 2;
	return (nb);
}
