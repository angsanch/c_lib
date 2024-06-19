/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_compute_power_rec.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:46:18 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:46:18 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_compute_power_rec(int nb, int p)
{
	if (p == 0)
		return (1);
	else if (p < 0)
		return (0);
	else
		return (nb * my_compute_power_rec(nb, p - 1));
}
