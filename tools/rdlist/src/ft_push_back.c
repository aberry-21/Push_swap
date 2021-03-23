/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:18:19 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 15:48:20 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"
#include <stdio.h>

void			ft_push_back(t_rdlist **head, t_rdlist *new_node)
{
	t_rdlist *last_node;

	if (!head || !new_node)
		return ;
	if (!*head)
		*head = ft_initializer_list();
	++(*head)->value;
	last_node = ft_back(*head);
	(*head)->prev = new_node;
	new_node->next = *head;
	last_node->next = new_node;
	new_node->prev = last_node;
}
