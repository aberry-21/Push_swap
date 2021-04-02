/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:02:18 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 17:14:33 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int			main(int argc, char const *argv[])
{
	t_stack		stack;

	if (argc < 2)
		return (0);
	if (ft_init_stack(&stack))
		ft_exit(&stack, "Error", 1);
	if (ft_initialization_stack(&stack, argv, argc - 1))
		ft_exit(&stack, "Error", 1);
	ft_visualizer(&stack, "Initialization");
	if(ft_input_command(&stack))
		ft_exit(&stack, "Error", 1);
	ft_visualizer(&stack, "Result");
	ft_putendl_fd((ft_check_result(&stack)) ?\
						"\033[1;31mKO\033[m" :\
						"\033[1;32mOK\033[m", 1);
	ft_exit(&stack, 0, 0);
}
