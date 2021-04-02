/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_push_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:44:28 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:49:26 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_push_b(t_stack *prt_stack, int attributes)
{
	if (prt_stack)
		ft_cmd_push(prt_stack->a, prt_stack->b);
	if (attributes == FOR_PUSH_SWAP)
		write(1, "pb\n", 3);
}
