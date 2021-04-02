/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_middlepoint.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:44:05 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 20:07:24 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_get_middlepoint(t_stack *stack, t_rdlist *head, int size)
{
	ft_initialization_array(stack, head, size);
	ft_quick_sort(stack->sort_array, 0, size - 1);
	return (stack->sort_array[size / 2]);
}
