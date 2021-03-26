/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_swap_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:55:47 by aberry            #+#    #+#             */
/*   Updated: 2021/03/26 21:17:10 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_swap_all(t_stack *prt_stack)
{
	if (prt_stack)
	{
		ft_cmd_swap_a(prt_stack);
		ft_cmd_swap_b(prt_stack);
	}
}
