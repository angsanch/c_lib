/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sort_int_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:46:39 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:46:39 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/basic_utils.h"

static int	buble(int *array, size_t size)
{
	size_t	i;
	int		in_order;
	int		sorted;

	i = 0;
	sorted = 1;
	size --;
	while (i < size)
	{
		in_order = array[i] <= array[i + 1];
		if (!in_order)
			my_swap(array + i, array + i + 1);
		sorted *= in_order;
		i ++;
	}
	return (sorted);
}

void	my_sort_int_array(int *array, size_t size)
{
	while (!buble(array, size))
		;
}
