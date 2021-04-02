/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_rotate_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:45:35 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 18:58:38 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_rotate_b(t_stack *prt_stack, int attributes)
{
	if (prt_stack)
		ft_cmd_rotate(prt_stack->b);
	if(attributes == FOR_PUSH_SWAP)
		write(1, "rb\n", 3);
}
