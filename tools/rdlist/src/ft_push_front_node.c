/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_front_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:40:46 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 22:08:44 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void			ft_push_front_node(t_rdlist **head, t_rdlist *new_node)
{
	if (!head || !new_node)
		return ;
	if (!*head)
		*head = ft_initializer_list();
	if (*head)
		ft_insert_node(*head, (*head)->next, new_node);
}
