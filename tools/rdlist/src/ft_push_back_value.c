/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:45:37 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 23:38:16 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_rdlist		*ft_push_back_value(t_rdlist **head, void *value)
{
	t_rdlist	*new_node;

	new_node = ft_create_node(value);
	if (!head || !new_node)
		return ((t_rdlist *)0);
	if (!*head)
		*head = ft_initializer_list();
	if (*head)
		ft_insert_node(*head, *head, new_node);
	return (new_node);
}
