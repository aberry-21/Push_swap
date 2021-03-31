/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:02:35 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 00:48:59 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_swap_int_value(int *first, int *second)
{
	int		tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}

void			ft_quick_sort(int *array, int first, int last)
{
	int		left;
	int		right;
	int		middle;

	if (first < last)
	{
		left = first;
		right = last;
		middle = array[(left + right) / 2];
		while (left <= right)
		{
			while (array[left] < middle)
				left++;
			while (array[right] > middle)
				right--;
			if (left <= right)
				ft_swap_int_value(&array[left++], &array[right--]);
		}
		ft_quick_sort(array, first, right);
		ft_quick_sort(array, left, last);
	}
}
