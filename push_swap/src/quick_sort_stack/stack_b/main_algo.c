/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_stack_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 22:44:14 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 15:40:49 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_quick_sort_stack_b(t_stack *stack, int group)
{
	int			size;

	if (group == 0)
		return ;
	size = ft_size_group(stack->b, group);
	if (ft_issort(stack->b, ft_compare_more, size - 1) == 1)
	{
		ft_push_all_to_stack_a(stack, group);
		return ;
	}
	if (size > 2)
		ft_operation_with_stack_b(stack, size);
	if (size == 2)
	{
		ft_cmd_swap_b(stack, FOR_PUSH_SWAP);
		ft_push_all_to_stack_a(stack, group);
	}
}
