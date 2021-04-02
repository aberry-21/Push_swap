/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:41:06 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 15:41:12 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_push_all_to_stack_a(t_stack *stack, int group)
{
	t_rdlist	*head;

	head = ft_front(stack->b);
	while (head && head->group == group)
	{
		ft_cmd_push_a(stack, FOR_PUSH_SWAP);
		head = ft_front(stack->b);
	}
}
