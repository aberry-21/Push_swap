/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signature.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:26:54 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 20:38:26 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void			ft_print_signature(t_stack *stack, char *message)
{
	ft_print_command(message);
	ft_print_stack_name();
	ft_print_info_stack(stack);
}
