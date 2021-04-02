/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:56:45 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 21:15:02 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initialization.h"

int			ft_init_stack(t_stack *stack)
{
	ft_bzero(stack, sizeof(t_stack));
	stack->a = ft_initializer_list();
	stack->b = ft_initializer_list();
	if (stack->a == 0 || stack->b == 0)
		return (1);
	stack->a->group = 0;
	stack->b->group = 0;
	return (0);
}
