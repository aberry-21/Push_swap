/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:02:18 by aberry            #+#    #+#             */
/*   Updated: 2021/03/26 21:23:36 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>
// make && gcc main.c -I includes/ librdlist.a

void		*ft_int2voidp(uintptr_t i)
{
	return ((void*)i);
}


int			main(void)
{
	t_stack		stack;
	t_rdlist	*current;
	size_t		count;

	ft_push_back_value(&stack.a, ft_int2voidp(11));
	ft_push_back_value(&stack.a, ft_int2voidp(12));
	ft_push_back_value(&stack.a, ft_int2voidp(13));
	ft_push_back_value(&stack.a, ft_int2voidp(14));
	count = (int)stack.a->value;
	current = stack.a;
	for (size_t i = 0; i <= count; i++)
	{
		printf("%d\n", (int)current->value);
		current = current->next;
	}
	ft_cmd_rotate_a(&stack);
	
	printf("\n\n");

	count = (int)stack.a->value;
	current = stack.a;
	for (size_t i = 0; i <= count; i++)
	{
		printf("%d\n", (int)current->value);
		current = current->next;
	}
	// ft_bzero(&stack, sizeof(t_stack));
	// if (argc > 1)
	// 	ft_initialization_stack(&stack, argv, argc - 1);
	// ft_print_stack(stack.a);
	// ft_exit(&stack, "good", 0);
	return (0);
}
