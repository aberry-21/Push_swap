/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:30:03 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 16:00:58 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rdlist.h"
#include <stdio.h>
// make && gcc main.c -I includes/ librdlist.a
int main(int argc, char const *argv[])
{
	t_rdlist	*head;
	t_rdlist	*node;

	head = ft_initializer_list();
	node = ft_new_node((void *)0);
	node->value += 42;
	ft_push_back(&head, node);
	node = ft_new_node((void *)0);
	node->value += 43;
	ft_push_back(&head, node);
	node = ft_new_node((void *)0);
	node->value += 44;
	ft_push_back(&head, node);
	size_t count = (int)head->value;
	for (size_t i = 0; i < count; i++)
	{
		printf("%d\n", (int)head->next->value);
		head = head->next;
	}
	return 0;
}
