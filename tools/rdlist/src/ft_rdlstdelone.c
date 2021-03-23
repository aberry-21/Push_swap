/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdlstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:47:05 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 21:45:43 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void			ft_rdlstdelone(t_rdlist *head, t_rdlist *node, void (*del)(void*))
{
	if (head && node)
	{
		if (del)
			del(node->value);
		node->prev->next = node->next;
		node->next->prev = node->prev;
		free(node);
		--head->value;
	}
}
