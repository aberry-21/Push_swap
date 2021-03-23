/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 21:30:09 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 21:43:09 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_rdlist		*ft_insert_value(t_rdlist *head, t_rdlist *current, void *value)
{
	t_rdlist		*new_node;

	new_node = ft_create_node(value);
	if (new_node)
		ft_insert_node(head, current, new_node);
	return (new_node);
}
