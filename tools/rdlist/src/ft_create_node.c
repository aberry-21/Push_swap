/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:40:05 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 20:42:02 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_rdlist		*ft_create_node(void *value)
{
	t_rdlist	*result;

	result = (t_rdlist *)malloc(sizeof(t_rdlist));
	if (!result)
		return ((t_rdlist *)0);
	result->value = value;
	result->next = result;
	result->prev = result;
	return (result);
}
