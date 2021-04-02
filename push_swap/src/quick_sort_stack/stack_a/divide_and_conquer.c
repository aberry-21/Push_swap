/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_and_conquer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:32:00 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 15:45:37 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void			ft_size_more_two(t_stack *stack, int group, int size)
{
	++stack->count_group;
	ft_operation_with_stack_a(stack, size);
	ft_quick_sort_stack_a(stack, group);
}

static void			ft_size_two(t_stack *stack, int group)
{
	ft_cmd_swap_a(stack, FOR_PUSH_SWAP);
	ft_set_stable_group(stack->a, group);
}

static void			ft_size_three(t_stack *stack, int group)
{
	ft_sort_three_elem_a(stack);
	ft_set_stable_group(stack->a, group);
}

void				ft_divide_and_conquer(t_stack *stack, int group, int size)
{
	if (size > 2)
		ft_size_more_two(stack, group, size);
	if (size == 2)
		ft_size_two(stack, group);
	if (size == 3)
		ft_size_three(stack, group);
}
