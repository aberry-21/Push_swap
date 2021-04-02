/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:32:39 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 15:51:16 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_prepare_stack(t_stack *stack)
{
	int			size;

	size = ft_rdlstsize(stack->a);
	if (ft_issort(stack->a, ft_compare_less, size - 1) == 1)
		return ;
	if (size > 3)
	{
		++stack->count_group;
		ft_operation_with_stack_a(stack, size);
		ft_prepare_stack(stack);
	}
	if (size == 2)
		ft_cmd_swap_a(stack, FOR_PUSH_SWAP);
	if (size == 3)
		ft_sort_three_elem_a(stack);
}
