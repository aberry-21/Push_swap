/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:58:36 by aberry            #+#    #+#             */
/*   Updated: 2021/03/31 18:49:42 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void			ft_prepare_for_sort_divide(t_stack *stack, int size, int step)
{
	int				counter;
	int				middle;

	middle = ft_find_middlepoint(stack->sort_array, stack->a, ft_rdlstsize(stack->a) - 1);
	counter = size / 2;
	while (counter)
	{
		if ((int)ft_front(stack->a)->value < middle)
		{
			ft_cmd_push_b(stack);
			ft_front(stack->b)->group = step;
			--counter;
		}
		else
			ft_cmd_rotate_a(stack);
	}
}

int				ft_prepare_for_sort(t_stack *stack, int step)
{
	int				size;
	int				group;

	if (ft_issort(stack->a, ft_compare_more, ft_rdlstsize(stack->a) - 1))
		return (0);
	size = ft_rdlstsize(stack->a);
	if (size > 2)
	{
		ft_prepare_for_sort_divide(stack, size, step);
		return (1 + ft_prepare_for_sort(stack, ++step));
	}
	if (size == 2)
		ft_cmd_swap_a(stack);
	return (0);
}
