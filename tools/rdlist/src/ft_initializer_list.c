/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initializer_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:58:48 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 15:05:08 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_rdlist		*ft_initializer_list(void)
{
	t_rdlist	*head_node;

	head_node = (t_rdlist *)malloc(sizeof(t_rdlist));
	if (!head_node)
		return ((t_rdlist *)0);
	head_node->value = 0;
	head_node->next = head_node;
	head_node->prev = head_node;
	return (head_node);
}
