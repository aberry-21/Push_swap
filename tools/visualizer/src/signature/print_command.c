/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:01:37 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 23:02:17 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void			ft_print_command(char *message)
{
	ft_putendl_fd("", 1);
	ft_print_separator('-', 80);
	ft_putendl_fd("", 1);
	if (!message)
		message = "";
	ft_print_separator(' ', 32);
	ft_putstr_fd("Command: ", 1);
	ft_putstr_fd(message, 1);
	ft_print_separator(' ', 38 - ft_strlen(message));
	ft_putendl_fd("", 1);
	ft_print_separator('-', 80);
	ft_putendl_fd("", 1);
}
