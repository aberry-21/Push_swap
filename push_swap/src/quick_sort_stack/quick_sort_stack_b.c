/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_stack_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:31:17 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 01:16:13 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void			ft_reset_b(t_stack *stack, int counter_rotate)
{
	while (counter_rotate)
	{
		ft_cmd_rev_rotate_b(stack);
		--counter_rotate;
	}
}

static void			ft_push_b_to_a(t_stack *stack, int size)
{
	while (size)
	{
		ft_cmd_push_a(stack);
		--size;
	}
}

static void			ft_swap_b(t_stack *stack, int size)
{
	if (size == 2)
	{
		if ((int)ft_front(stack->b)->value < (int)ft_front(stack->b)->next->value)
			ft_cmd_swap_b(stack);
		ft_push_b_to_a(stack, size);
	}
}


static void			ft_divide_b(t_stack *stack, int size)
{
	int				counter_push;
	int				counter_rotate;
	int				middle;

	middle = ft_find_middlepoint(stack->sort_array, stack->b, size - 1);
	counter_rotate = 0;
	counter_push = size / 2;
	while (counter_push)
	{
		if ((int)ft_front(stack->b)->value >= middle)
		{
			ft_cmd_push_a(stack);
			--counter_push;
		}
		else
		{
			ft_cmd_rotate_b(stack);
			++counter_rotate;
		}
		--size;
	}
	ft_reset_b(stack, counter_rotate);
}

void				ft_quick_sort_stack_b(t_stack *stack, int group)
{
	int				size;

	size = ft_size_group(stack->b, group);
	if (ft_issort(stack->b, ft_compare_less, size - 1))
		ft_push_b_to_a(stack, size);
	if (size > 2)
	{
		ft_divide_b(stack, size);
		ft_quick_sort_stack_b(stack, group);
	}
	ft_swap_b(stack, size);
}
