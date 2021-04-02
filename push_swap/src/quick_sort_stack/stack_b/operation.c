/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:34:25 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:47:48 by aberry           ###   ########.fr       */
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
		if ((int)ft_front(stack->b)->value > middle)
		{
			ft_cmd_push_a(stack, FOR_PUSH_SWAP);
			--count_operation;
		}
		else if ((int)ft_back(stack->b)->value > middle)
		{
			ft_cmd_rev_rotate_b(stack, FOR_PUSH_SWAP);
			ft_cmd_push_a(stack, FOR_PUSH_SWAP);
			--count_operation;
		}
		else
			ft_cmd_rotate_b(stack, FOR_PUSH_SWAP);
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
		if ((int)ft_front(stack->b)->value > middle)
		{
			ft_cmd_push_a(stack, FOR_PUSH_SWAP);
			--count_operation;
		}
		else
		{
			ft_cmd_rotate_b(stack, FOR_PUSH_SWAP);
			++count_rotate;
		}
	}
	while (count_rotate)
	{
		ft_cmd_rev_rotate_b(stack, FOR_PUSH_SWAP);
		--count_rotate;
	}
}

void				ft_operation_with_stack_b(t_stack *stack, int size)
{
	int			count_operation;
	int			count_rotate;
	int			middle;

	count_operation = size / 2;
	if (size % 2 == 0)
		--count_operation;
	count_rotate = 0;
	middle = ft_get_middlepoint(stack, stack->b, size);
	if (ft_front(stack->b)->group == ft_back(stack->b)->group)
		ft_operation_with_one_group(stack, middle, count_operation);
	else
		ft_operation_with_many_group(stack, middle, count_operation,\
															count_rotate);
}
