/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_swap_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:54:05 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 18:58:49 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "command.h"

void				ft_cmd_swap_b(t_stack *prt_stack, int attributes)
{
	if (prt_stack)
		ft_cmd_swap(prt_stack->b);
	if(attributes == FOR_PUSH_SWAP)
		write(1, "sb\n", 3);
}
