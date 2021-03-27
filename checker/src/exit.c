/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:39:21 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 23:23:27 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		ft_exit(t_stack *stack, char *error_message, int exit_code)
{
	if (error_message)
		ft_putendl_fd(error_message, 2);
	ft_rdlstclear(&stack->a, (void *)0);
	ft_rdlstclear(&stack->b, (void *)0);
	stack = (t_stack *)0;
	exit(exit_code);
}
