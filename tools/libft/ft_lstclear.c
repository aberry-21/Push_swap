/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:45:08 by aberry            #+#    #+#             */
/*   Updated: 2021/03/22 21:36:43 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	while (*lst)
	{
		if ((*lst)->content && del)
			del((*lst)->content);
		p = *lst;
		*lst = p->next;
		free(p);
	}
	lst = NULL;
}
