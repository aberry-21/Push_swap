/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_rev_rotate_all.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:50:09 by aberry            #+#    #+#             */
/*   Updated: 2021/03/26 21:17:00 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void				ft_cmd_rev_rotate_all(t_stack *prt_stack)
{
	ft_cmd_rev_rotate_a(prt_stack);
	ft_cmd_rev_rotate_b(prt_stack);
}
