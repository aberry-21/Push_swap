/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:43:17 by aberry            #+#    #+#             */
/*   Updated: 2021/03/24 17:58:40 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

static int			ft_normalization_index(int index, int size)
{
	if (size == 0)
		return (index);
	index = index % size;
	index = (index < 0) ? index + size : index;
	return (index + 1);
}

t_rdlist		*ft_get_node(t_rdlist *head, int index)
{
	t_rdlist		*find_node;

	find_node = (t_rdlist *)0;
	if (head)
	{
		index = ft_normalization_index(index, (int)head->value);
		find_node = head;
		while (index > 0)
		{
			find_node = find_node->next;
			--index;
		}
	}
	return (find_node);
}
