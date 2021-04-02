/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:04:20 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:44:51 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_initialization_array(t_stack *stack, t_rdlist *head, int size)
{
	int		counter;

	counter = 0;
	head = ft_front(head);
	while (counter < size)
	{
		stack->sort_array[counter] = (int)head->value;
		head = head->next;
		++counter;
	}
}
