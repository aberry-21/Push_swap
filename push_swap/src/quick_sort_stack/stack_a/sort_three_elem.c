/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_elem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:53:12 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:46:31 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sort_three_elem_a(t_stack *stack)
{
	t_rdlist		*begin;
	int				index_max_v;

	begin = ft_front(stack->a);
	index_max_v = ft_get_index_max_elem(begin);
	if (index_max_v == 0)
		ft_cmd_rotate_a(stack, FOR_PUSH_SWAP);
	if (index_max_v == 1)
		ft_cmd_rev_rotate_a(stack, FOR_PUSH_SWAP);
	begin = ft_front(stack->a);
	if ((int)begin->value > (int)begin->next->value)
		ft_cmd_swap_a(stack, FOR_PUSH_SWAP);
}
