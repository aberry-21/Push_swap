/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:25:41 by aberry            #+#    #+#             */
/*   Updated: 2021/04/01 01:07:39 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_init_stack(t_stack *stack)
{
	ft_bzero(stack, sizeof(t_stack));
	stack->a = ft_initializer_list();
	stack->b = ft_initializer_list();
}

void		ft_debug(t_rdlist *stack)
{
	int			size;

	size = ft_rdlstsize(stack);
	stack = ft_front(stack);
	for (int i = 0; i < size; i++)
	{
		printf("group = %d\n", stack->group);
		stack = stack->next;
	}
}



void				ft_quick_sort_stack(t_stack *stack, int group)
{
	while (group)
	{
		ft_quick_sort_stack_b(stack, group);
		// ft_visualizer(stack, "Result");
		// sleep(1);
		ft_quick_sort_stack_a(stack, group);
		// ft_visualizer(stack, "Result");
		// sleep(1);
		if (ft_front(stack->b)->group != group)
			--group;
	}
}

int			main(int argc, char const *argv[])
{
	t_stack		stack;

	if (argc < 2)
		return (0);
	ft_init_stack(&stack);
	if (ft_initialization_stack(&stack, argv, argc - 1))
		return(1);
	stack.sort_array = ft_calloc((int)stack.a->value, sizeof(int));
	if (stack.sort_array == 0)
		return(1);
	stack.count_group = ft_prepare_for_sort(&stack, 1);
	ft_quick_sort_stack(&stack, stack.count_group);
	ft_debug(stack.a);
	printf("\n");
	ft_debug(stack.b);
	ft_visualizer(&stack, "Result");
}
