/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_middlepoint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:28:55 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 01:01:56 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_init_array(int *array, t_rdlist *head)
{
	t_rdlist	*end;
	int			size;
	int			counter;

	size = ft_rdlstsize(head);
	end = ft_back(head);
	head = ft_front(head);
	counter = 0;
	while (counter < size / 2)
	{
		array[counter] = (int)head->value;
		array[size - counter - 1] = (int)end->value;
		head = head->next;
		end = end->prev;
		++counter;
	}
	if (size % 2)
		array[counter] = (int)head->value;
}

int			ft_find_middlepoint(int *array, t_rdlist *head, int last)
{
	ft_init_array(array, head);
	ft_quick_sort(array, 0, last);
	return (array[(last + 1) / 2]);
}

/*

Было в массиве (старое):	53 12 1 2 46 8

Элементы в группе :			12 8 2 1


Новый массив:				[1 2 8 12 ] 2 46 8


Вернет медиану в группе которая будет равна 8 
*/