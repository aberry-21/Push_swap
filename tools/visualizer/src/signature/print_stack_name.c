/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack_name.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:09:22 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 23:02:36 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void			ft_print_stack_name(void)
{
	ft_print_info("Stack a");
	ft_print_separator('|', 1);
	ft_print_info("Stack b");
	ft_putendl_fd("", 1);
	ft_print_separator('-', 80);
	ft_putendl_fd("", 1);
	ft_print_info("");
	ft_print_separator('|', 1);
	ft_print_info("");
	ft_putendl_fd("", 1);
}
