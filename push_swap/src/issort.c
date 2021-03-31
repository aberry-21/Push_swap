/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:49:50 by aberry            #+#    #+#             */
/*   Updated: 2021/03/31 18:48:03 by aberry           ###   ########.fr       */
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

	slow = ft_front(stack);
	fast = slow->next;
	while (last)
	{
		if (compare((int)slow->value, (int)fast->value))
			return (0);
		slow = fast;
		fast = fast->next;
		--last;
	}
	return (1);
}
