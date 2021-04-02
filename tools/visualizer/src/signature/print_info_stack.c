/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_info_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:11:50 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 23:02:26 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void			ft_print_info_stack(t_stack *stack)
{
	ft_print_info("Size");
	ft_print_separator('|', 1);
	ft_print_info("Size");
	ft_putendl_fd("", 1);
	ft_putnumber_fd((int)stack->a->value, 1);
	ft_print_separator('|', 1);
	ft_putnumber_fd((int)stack->b->value, 1);
	ft_putendl_fd("", 1);
	ft_print_separator('-', 80);
	ft_putendl_fd("", 1);
}
