/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_compute_square_root.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:46:18 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:46:19 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_compute_square_root(int nb)
{
	int	sq;

	sq = 1;
	while (sq <= nb / sq)
	{
		if (sq * sq == nb)
			return (sq);
		sq ++;
	}
	return (0);
}
