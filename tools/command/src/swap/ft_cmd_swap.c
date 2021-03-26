/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:38:59 by aberry            #+#    #+#             */
/*   Updated: 2021/03/25 22:03:57 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_swap(t_rdlist *head_stack)
{
	if (head_stack && (int)head_stack->value > 1)
		ft_swap_value(ft_get_node(head_stack, 0), ft_get_node(head_stack, 1));
}
