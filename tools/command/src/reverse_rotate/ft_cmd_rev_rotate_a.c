/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_rev_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:49:35 by aberry            #+#    #+#             */
/*   Updated: 2021/03/26 20:51:15 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_rev_rotate_a(t_stack *prt_stack)
{
	if (prt_stack)
		ft_cmd_rev_rotate(prt_stack->a);
}
