/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visualizer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:36:59 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 20:38:58 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void			ft_visualizer(t_stack *stack, char *message)
{
	ft_print_signature(stack, message);
	ft_print_stack(stack);
	ft_putendl_fd(SEPARATOR, 1);
}
