/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:09:32 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 15:16:08 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

t_rdlist		*ft_new_node(void *value)
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
