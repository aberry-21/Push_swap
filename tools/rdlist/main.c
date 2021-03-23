/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:30:03 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 23:19:20 by aberry           ###   ########.fr       */
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
	
	ft_push_back_node(&head, ft_create_node(ft_int2voidp(45)));
	ft_push_back_value(&head, ft_int2voidp(42));
	ft_push_front_node(&head, ft_create_node(ft_int2voidp(43)));
	ft_push_front_value(&head, ft_int2voidp(44));

	ft_insert_node(head, head->next->next, ft_create_node(ft_int2voidp(0)));
	ft_insert_value(head, head->next->next, 1);

	size_t count = (int)head->value;
	current = head;
	for (size_t i = 0; i < count; i++)
	{
		printf("%d\n", (int)current->next->value);
		current = current->next;
	}
	ft_pop_back(&head, 0);
	ft_pop_front(&head, 0);
	printf("\n\n");
	count = ft_rdlstsize(head);
	current = head;
	for (size_t i = 0; i < count; i++)
	{
		printf("%d\n", (int)current->next->value);
		current = current->next;
	}
	ft_rdlstclear(&head, 0);
	sleep(5);
	return 0;
}
