/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:57:21 by aberry            #+#    #+#             */
/*   Updated: 2021/03/25 22:06:35 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_push(t_rdlist *first_stack, t_rdlist *second_stack)
{
	t_rdlist		*first_elem;

	if (first_stack && second_stack)
	{
		if ((int)first_stack->value == 0)
			return ;
		first_elem = ft_cut_node(first_stack, ft_get_node(first_stack, 0));
		ft_insert_node(second_stack, ft_front(second_stack), first_elem);
	}
}
