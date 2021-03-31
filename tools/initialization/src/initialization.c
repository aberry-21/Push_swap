/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:36:11 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 01:18:41 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initialization.h"

static void		*ft_int2voidp(uintptr_t i)
{
	return ((void*)i);
}

int				ft_initialization_stack(\
									t_stack *stack,\
									char const *elements[],\
									int count_elem)
{
	t_rdlist		*new_elem;
	int				digit;

	new_elem = (t_rdlist *)0;
	while (count_elem)
	{
		if (ft_isnumber(elements[count_elem]) == 0)
			return (1);
		digit = ft_atoi(elements[count_elem]);
		if (ft_is_more_limit(digit, elements[count_elem]))// переделать 
			return (1);
		new_elem = ft_push_front_value(&stack->a, ft_int2voidp(digit));
		new_elem->group = 0;
		if (!new_elem)
			return (1);
		--count_elem;
	}
	if (ft_check_duplicate_data(stack->a))
		return (1);
	return (0);
}
