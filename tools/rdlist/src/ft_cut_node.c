/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:26:16 by aberry            #+#    #+#             */
/*   Updated: 2021/03/25 21:35:14 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_rdlist		*ft_cut_node(t_rdlist *head, t_rdlist *node)
{
	if (head && node)
	{
		if ((int)head->value > 0)
		{
			--head->value;
			node->prev->next = node->next;
			node->next->prev = node->prev;
		}
	}
	return (node);
}
