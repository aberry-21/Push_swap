/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_swap_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:51:56 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 18:58:43 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_swap_a(t_stack *prt_stack, int attributes)
{
	if (prt_stack)
		ft_cmd_swap(prt_stack->a);
	if(attributes == FOR_PUSH_SWAP)
		write(1, "sa\n", 3);
}
