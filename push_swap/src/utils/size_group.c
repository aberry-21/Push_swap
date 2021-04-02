/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_group.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:38:22 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 15:12:11 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_size_group(t_rdlist *head, int group)
{
	int			size;

	size = 0;
	head = ft_front(head);
	while (head->group == group)
	{
		head = head->next;
		size++;
	}
	return (size);
}
