/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:02:18 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 00:19:36 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"



int			main(int argc, char const *argv[])
{
	t_stack		stack;

	ft_bzero(&stack, sizeof(t_stack));
	if (argc > 1)
		ft_initialization_stack(&stack, argv, argc - 1);
	ft_print_stack(stack.a);
	ft_exit(&stack, "good", 0);
	return (0);
}
