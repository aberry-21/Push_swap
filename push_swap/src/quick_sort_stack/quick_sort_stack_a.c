/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:29:55 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 01:10:00 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void			ft_reset_a(t_stack *stack, int counter_rotate)
{
	while (counter_rotate)
	{
		ft_cmd_rev_rotate_a(stack);
		--counter_rotate;
	}
}

static void			ft_swap_a(t_stack *stack, int size)
{
	if (size == 2)
	{
		if ((int)ft_front(stack->a)->value > (int)ft_front(stack->a)->next->value)//не нужно (maybe)
			ft_cmd_swap_a(stack);
	}
}


static void			ft_divide_a(t_stack *stack, int size)
{
	int				counter_push;
	int				counter_rotate;
	int				middle;

	middle = ft_find_middlepoint(stack->sort_array, stack->a, size - 1);
	counter_push = size / 2;
	counter_rotate = 0;
	while (counter_push)
	{
		if ((int)ft_front(stack->a)->value < middle)
		{
			ft_cmd_push_b(stack);
			--counter_push;
		}
		else
		{
			ft_cmd_rotate_a(stack);
			++counter_rotate;
		}
	}
	ft_reset_a(stack, counter_rotate);
}

void				ft_quick_sort_stack_a(t_stack *stack, int group)
{
	int				size;

	if (ft_issort(stack->a, ft_compare_more, ft_rdlstsize(stack->a) - 1))
		return ;
	size = ft_size_group(stack->a, group);
	if (size > 2)
	{
		ft_divide_a(stack, size);
		ft_quick_sort_stack_a(stack, group);
	}
	ft_swap_a(stack, size);
}
