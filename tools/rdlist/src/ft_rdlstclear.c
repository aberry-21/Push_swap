/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdlstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:46:40 by aberry            #+#    #+#             */
/*   Updated: 2021/03/25 20:55:22 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"
#include <stdio.h>

void			ft_rdlstclear(t_rdlist **head, void (*del)(void*))
{
	size_t		size;
	size_t		counter;
	t_rdlist	*node;

	if (head && *head)
	{
		size = ft_rdlstsize(*head);
		counter = 0;
		while (counter <= size)
		{
			node = (*head);
			if (del)
				del(node->value);
			(*head) = (*head)->next;
			free(node);
			++counter;
		}
	}
	*head = (t_rdlist *)0;
	head = 0;
}
