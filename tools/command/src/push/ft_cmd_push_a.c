/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_push_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:42:49 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 18:58:11 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_push_a(t_stack *prt_stack, int attributes)
{
	if (prt_stack)
		ft_cmd_push(prt_stack->b, prt_stack->a);
	if(attributes == FOR_PUSH_SWAP)
		write(1, "pa\n", 3);
}