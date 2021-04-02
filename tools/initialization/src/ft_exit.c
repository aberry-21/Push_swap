/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:53:28 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 21:21:29 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initialization.h"

void		ft_exit(t_stack *stack, char *error_message, int exit_code)
{
	if (error_message)
		ft_putendl_fd(error_message, 2);
	ft_rdlstclear(&stack->a, (void *)0);
	ft_rdlstclear(&stack->b, (void *)0);
	free(stack->sort_array);
	stack = (t_stack *)0;
	exit(exit_code);
}
