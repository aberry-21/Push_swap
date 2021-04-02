/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:34:05 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 23:25:55 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				ft_compare_less(int first, int second)
{
	return (first < second);
}

int				ft_compare_more(int first, int second)
{
	return (first > second);
}

int				ft_issort(t_rdlist *stack, int (*compare)(int, int), int last)
{
	t_rdlist		*slow;
	t_rdlist		*fast;
	int				counter;

	slow = ft_front(stack);
	fast = slow->next;
	counter = 0;
	while (counter < last)
	{
		if (compare((int)slow->value, (int)fast->value) == 0)
			return (0);
		slow = fast;
		fast = fast->next;
		++counter;
	}
	return (1);
}