/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visualizer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:36:59 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 23:01:59 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void			ft_visualizer(t_stack *stack, char *message)
{
	ft_print_signature(stack, message);
	ft_print_stack(stack);
	ft_print_separator('-', 80);
	ft_putendl_fd("", 1);
}
