/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_max_elem.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:22:04 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 15:09:24 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static int		ft_find_max_value(t_rdlist *begin)
{
	int		max_value;
	int		counter;

	max_value = INT_MIN;
	counter = 0;
	while (counter < 3)
	{
		if ((int)begin->value > max_value)
			max_value = (int)begin->value;
		++counter;
		begin = begin->next;
	}
	return (max_value);
}

int			ft_get_index_max_elem(t_rdlist *begin)
{
	int		max_value;
	int		counter;

	max_value = ft_find_max_value(begin);
	counter = 0;
	while ((int)begin->value != max_value)
	{
		++counter;
		begin = begin->next;
	}
	return (counter);
}
