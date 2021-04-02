/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:02:35 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:45:50 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void			ft_swap_int(int *first, int *second)
{
	int		tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}

static int			ft_divide(int arr[], int low, int fast)
{
	int		pivot;
	int		i;
	int		j;

	pivot = arr[fast];
	i = (low - 1);
	j = low;
	while (j <= fast - 1)
	{
		if (arr[j] < pivot)
		{
			i++;
			ft_swap_int(&arr[i], &arr[j]);
		}
		j++;
	}
	ft_swap_int(&arr[i + 1], &arr[fast]);
	return (i + 1);
}

void				ft_quick_sort(int arr[], int low, int fast)
{
	int		middlepoint;

	if (low < fast)
	{
		middlepoint = ft_divide(arr, low, fast);
		ft_quick_sort(arr, low, middlepoint - 1);
		ft_quick_sort(arr, middlepoint + 1, fast);
	}
}
