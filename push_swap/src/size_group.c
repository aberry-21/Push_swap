/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_group.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:43:42 by aberry            #+#    #+#             */
/*   Updated: 2021/03/31 17:46:07 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int					ft_size_group(t_rdlist *begin_stack, int group)
{
	int			counter;

	counter = 0;
	begin_stack = ft_front(begin_stack);
	while (begin_stack)
	{
		if (begin_stack->group != group)
			break;
		++counter;
		begin_stack = begin_stack->next;
	}
	return (counter);
}
