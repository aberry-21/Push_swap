/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:33:06 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 20:48:44 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

t_rdlist			*ft_print_stack_value(\
									int count,\
									t_rdlist *head_stack,\
									t_rdlist *current)
{
	if (count <= (int)head_stack->value)
	{
		ft_putnumber_fd((int)current->value, 1);
		return (current->next);
	}
	else
		ft_print_separator(' ', 39);
	return (current);
}
