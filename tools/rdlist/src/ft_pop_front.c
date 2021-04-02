/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:43:03 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:57:07 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void			ft_pop_front(t_rdlist **head, void (*del)(void*))
{
	t_rdlist	*current;

	if (head && *head)
	{
		current = ft_front(*head);
		ft_rdlstdelone(*head, current, del);
	}
}
