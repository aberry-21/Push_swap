/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_swap_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:55:47 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 19:00:01 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_swap_all(t_stack *prt_stack, int attributes)
{
	if (prt_stack)
	{
		ft_cmd_swap_a(prt_stack, attributes);
		ft_cmd_swap_b(prt_stack, attributes);
	}
	if(attributes == FOR_PUSH_SWAP)
		write(1, "ss\n", 3);
}
