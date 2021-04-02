/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_rotate_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:45:50 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 18:59:53 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_rotate_all(t_stack *prt_stack, int attributes)
{
	ft_cmd_rotate_a(prt_stack, attributes);
	ft_cmd_rotate_b(prt_stack, attributes);
	if(attributes == FOR_PUSH_SWAP)
		write(1, "rr\n", 3);
}
