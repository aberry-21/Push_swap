/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 21:29:28 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 23:27:49 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

//TODO current --> position

void		ft_insert_node(t_rdlist *head, t_rdlist *current, t_rdlist *new_node)
{
	if (current && new_node && head)
	{
		current->prev->next = new_node;
		new_node->prev = current->prev;
		current->prev = new_node;
		new_node->next = current;
		++head->value;
	}
}