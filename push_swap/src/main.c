/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:25:41 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 20:51:25 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int argc, char const *argv[])
{
	t_stack		stack;

	if (argc < 2)
		return (0);
	if (ft_init_stack(&stack))
		ft_exit(&stack, "Error", 1);
	if (ft_initialization_stack(&stack, argv, argc - 1))
		ft_exit(&stack, "Error", 1);
	stack.sort_array = ft_calloc(ft_rdlstsize(stack.a), sizeof(int));
	if (stack.sort_array == 0)
		ft_exit(&stack, "Error", 1);
	ft_quick_sort_stack(&stack);
	ft_exit(&stack, 0, 0);
}
