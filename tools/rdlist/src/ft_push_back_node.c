/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:45:03 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 23:40:16 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void			ft_push_back_node(t_rdlist **head, t_rdlist *new_node)
{
	t_rdlist	*last_node;

	if (!head || !new_node)
		return ;
	if (!*head)
		*head = ft_initializer_list();
	if (*head)
		ft_insert_node(*head, *head, new_node);
}
