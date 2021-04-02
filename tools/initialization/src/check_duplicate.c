/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:13:25 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:52:22 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initialization.h"

static int		ft_lst_find_data(t_rdlist *begin, int target, int count)
{
	while (count)
	{
		if ((int)begin->value == target)
			return (true);
		begin = begin->next;
		--count;
	}
	return (false);
}

int				ft_check_duplicate_data(t_rdlist *begin)
{
	t_rdlist		*slow;
	t_rdlist		*fast;
	int				count;

	slow = ft_front(begin);
	fast = slow->next;
	count = ft_rdlstsize(begin) - 1;
	while (count)
	{
		if (ft_lst_find_data(fast, (int)slow->value, count))
			return (true);
		slow = fast;
		fast = fast->next;
		--count;
	}
	return (false);
}
