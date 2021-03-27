/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:26:50 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 20:48:58 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"
#include <stdio.h>

void			ft_print_stack(t_stack *stack)
{
	int			max_count;
	t_rdlist	*a;
	t_rdlist	*b;

	max_count = ((int)stack->a->value > (int)stack->b->value) ?
										(int)stack->a->value :
										(int)stack->b->value;
	a = ft_front(stack->a);
	b = ft_front(stack->b);
	while (max_count)
	{
		a = ft_print_stack_value(max_count, stack->a, a);
		ft_print_separator('|', 1);
		b = ft_print_stack_value(max_count, stack->b, b);
		ft_putendl_fd("", 1);
		--max_count;
	}
}
