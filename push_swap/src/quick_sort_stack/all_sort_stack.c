/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_sort_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:48:57 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 16:27:40 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_quick_sort_stack(t_stack *stack)
{
	ft_prepare_stack(stack);
	while (ft_front(stack->a)->group != 0 || ft_front(stack->b)->group != 0)
	{
		ft_quick_sort_stack_a(stack, ft_front(stack->a)->group);
		ft_quick_sort_stack_b(stack, ft_front(stack->b)->group);
	}
}
