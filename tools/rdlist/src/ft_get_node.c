/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:43:17 by aberry            #+#    #+#             */
/*   Updated: 2021/03/25 21:25:08 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

#include <stdio.h>

static int			ft_normalization_index(int index, int size, int *flag)
{
	if (size == 0)
		return (index);
	index = index % size;
	index = (index < 0) ? index + size : index;
	if (index > size / 2)
	{
		index = size - index;
		++(*flag);
	}
	else
		++index;
	return (index);
}

t_rdlist		*ft_get_node(t_rdlist *head, int index)
{
	t_rdlist		*find_node;
	int				flag;

	find_node = (t_rdlist *)0;
	flag = 0;
	if (head)
	{
		index = ft_normalization_index(index, (int)head->value, &flag);
		find_node = head;
		while (index > 0)
		{
			find_node = (flag) ? find_node->prev : find_node->next;
			--index;
		}
	}
	return (find_node);
}
