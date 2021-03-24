/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:30:03 by aberry            #+#    #+#             */
/*   Updated: 2021/03/24 20:32:13 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"
#include <stdio.h>
// make && gcc main.c -I includes/ librdlist.a

void		*ft_int2voidp(uintptr_t i)
{
	return ((void*)i);
}

int main(int argc, char const *argv[])
{
	t_rdlist	*head;
	t_rdlist	*current;
	size_t		count;

	head = ft_initializer_list();


	count = (int)head->value;
	current = head;
	for (size_t i = 0; i < count; i++)
	{
		printf("%d\n", (int)current->next->value);
		current = current->next;
	}
	ft_rdlstclear(&head, 0);
	head = 0;
	// sleep(5);
	return 0;
}
