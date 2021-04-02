/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stable_group.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:30:43 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 15:31:02 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_set_stable_group(t_rdlist *head, int group)
{
	head = ft_front(head);
	while (head->group == group)
	{
		head->group = 0;
		head = head->next;
	}
}
