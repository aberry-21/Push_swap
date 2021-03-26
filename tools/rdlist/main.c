/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:30:03 by aberry            #+#    #+#             */
/*   Updated: 2021/03/26 01:52:09 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"
#include <stdio.h>
// make && gcc main.c -I includes/ librdlist.a

void		*ft_int2voidp(uintptr_t i)
{
	return ((void*)i);
}

void		ft_test(void)
{
	t_rdlist	*head;
	t_rdlist	*current;
	size_t		count;

	head = ft_initializer_list();
	ft_push_back_value(&head, ft_int2voidp(11));
	ft_push_back_value(&head, ft_int2voidp(12));
	ft_push_back_value(&head, ft_int2voidp(13));
	ft_push_back_value(&head, ft_int2voidp(14));

	count = (int)head->value;
	current = head;
	for (size_t i = 0; i <= count; i++)
	{
		printf("%d\n", (int)current->value);
		current = current->next;
	}


	
	ft_swap_node(head->next, head->next->next);

	printf("\n\n\n");
	count = (int)head->value;
	current = head;
	for (size_t i = 0; i <= count * 3 * 3 ; i++)
	{
		printf("%d\n", (int)current->value);
		current = current->next;
	}

	// ft_rdlstclear(&head, 0);
	head = 0;
}

int main(int argc, char const *argv[])
{
	ft_test();
	// sleep(5);
	return 0;
}