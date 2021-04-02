/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_rev_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:49:35 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:49:47 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_rev_rotate_a(t_stack *prt_stack, int attributes)
{
	if (prt_stack)
		ft_cmd_rev_rotate(prt_stack->a);
	if (attributes == FOR_PUSH_SWAP)
		write(1, "rra\n", 4);
}
