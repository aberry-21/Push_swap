/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:35:02 by aberry            #+#    #+#             */
/*   Updated: 2021/03/24 18:03:09 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void			ft_swap_value(t_rdlist *first_node, t_rdlist *second_node)
{
	void		*tmp;

	if ((first_node && second_node) && (first_node != second_node))
	{
		tmp = first_node->value;
		first_node->value = second_node->value;
		second_node->value = tmp;
	}
}
