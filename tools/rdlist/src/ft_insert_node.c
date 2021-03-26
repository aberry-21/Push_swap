/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 21:29:28 by aberry            #+#    #+#             */
/*   Updated: 2021/03/25 22:08:16 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void		ft_insert_node(t_rdlist *head, t_rdlist *position, t_rdlist *new_node)
{
	if (position && new_node && head)
	{
		position->prev->next = new_node;
		new_node->prev = position->prev;
		position->prev = new_node;
		new_node->next = position;
		++head->value;
	}
}
