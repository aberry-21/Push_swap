/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:41:50 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 22:12:44 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"

void			ft_pop_back(t_rdlist **head,void (*del)(void*))
{
	t_rdlist	*current;

	if (head && *head)
	{
		current = ft_back(*head);
		ft_rdlstdelone(*head, current, del);
	}
}