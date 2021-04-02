/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:18:49 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 15:39:54 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void			ft_operation_with_one_group(\
												t_stack *stack,\
												int middle,\
												int count_operation)
{
	while (count_operation > 0)
	{
		if ((int)ft_front(stack->a)->value < middle)
		{
			ft_cmd_push_b(stack, FOR_PUSH_SWAP);
			ft_front(stack->b)->group = stack->count_group;
			--count_operation;
		}
		else if ((int)ft_back(stack->a)->value < middle)
		{
			ft_cmd_rev_rotate_a(stack, FOR_PUSH_SWAP);
			ft_cmd_push_b(stack, FOR_PUSH_SWAP);
			ft_front(stack->b)->group = stack->count_group;
			--count_operation;
		}
		else
			ft_cmd_rotate_a(stack, FOR_PUSH_SWAP);
	}
}

static void			ft_operation_with_many_group(\
												t_stack *stack,\
												int middle,\
												int count_operation,\
												int count_rotate)
{
	while (count_operation > 0)
	{
		if ((int)ft_front(stack->a)->value < middle)
		{
			ft_cmd_push_b(stack, FOR_PUSH_SWAP);
			ft_front(stack->b)->group = stack->count_group;
			--count_operation;
		}
		else
		{
			ft_cmd_rotate_a(stack, FOR_PUSH_SWAP);
			++count_rotate;
		}
	}
	while (count_rotate)
	{
		ft_cmd_rev_rotate_a(stack, FOR_PUSH_SWAP);
		--count_rotate;
	}
}

void			ft_operation_with_stack_a(t_stack *stack, int size)
{
	int			count_operation;
	int			count_rotate;
	int			middle;

	middle = ft_get_middlepoint(stack, stack->a, size);
	count_operation = size / 2;
	count_rotate = 0;
	if (ft_front(stack->a)->group == ft_back(stack->a)->group)
		ft_operation_with_one_group(stack, middle, count_operation);
	else
		ft_operation_with_many_group(stack, middle, count_operation,\
																count_rotate);
}
