/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:37:13 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 15:32:38 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_quick_sort_stack_a(t_stack *stack, int group)
{
	int			size;

	if (group == 0)
		return ;
	size = ft_size_group(stack->a, group);
	if (ft_issort(stack->a, ft_compare_less, size - 1) == 1)
	{
		ft_set_stable_group(stack->a, group);
		return ;
	}
	ft_divide_and_conquer(stack, group, size);
}
