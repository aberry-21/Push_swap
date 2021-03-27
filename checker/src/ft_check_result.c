/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:55:52 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 23:01:30 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int				ft_check_result(t_stack *stack)
{
	t_rdlist		*slow;
	t_rdlist		*fast;
	int				count;

	if (ft_rdlstsize(stack->b) != 0)
		return (1);
	slow = ft_front(stack->a);
	fast = slow->next;
	count = ft_rdlstsize(stack->a) - 1;
	while (count)
	{
		if ((int)fast->value < (int)slow->value)
			return (1);
		slow = fast;
		fast = fast->next;
		--count;
	}
	return (0);
}
