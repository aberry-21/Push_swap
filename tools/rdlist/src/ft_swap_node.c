/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:48:08 by aberry            #+#    #+#             */
/*   Updated: 2021/03/26 01:52:35 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void		ft_swap_node(t_rdlist *first_node, t_rdlist *second_node)
{
	t_rdlist *second_node_prev;
	t_rdlist *second_node_next;
	t_rdlist *temp;

	if ((first_node && second_node) && (first_node != second_node))
	{
		if (second_node->next == first_node)
		{
			temp = first_node;
			first_node = second_node;
			second_node = temp;
		}
		second_node_prev = second_node->prev;
		second_node_next = second_node->next;
		first_node->prev->next = second_node;
		second_node->prev = first_node->prev;
		second_node_prev->next = first_node;
		first_node->prev = second_node_prev;
		second_node->next = first_node->next;
		first_node->next->prev = second_node;
		first_node->next = second_node_next;
		second_node_next->prev = first_node;
	}
}
