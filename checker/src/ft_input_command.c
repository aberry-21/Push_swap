/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_command.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:07:43 by aberry            #+#    #+#             */
/*   Updated: 2021/03/30 16:19:44 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int				ft_exe_command(t_stack *stack, char *line)
{
	static char		array_pattern[11][4] = {"sa", "sb", "ss", "pa", "pb", "ra",\
											 "rb", "rr", "rra", "rrb", "rrr"};
	static void		(*array_funcs[])(t_stack *prt_stack) = {
		ft_cmd_swap_a, ft_cmd_swap_b, ft_cmd_swap_all, ft_cmd_push_a,\
		ft_cmd_push_b, ft_cmd_rotate_a, ft_cmd_rotate_b, ft_cmd_rotate_all,\
		ft_cmd_rev_rotate_a, ft_cmd_rev_rotate_b, ft_cmd_rev_rotate_all};
	int				counter;
	int				flag;

	counter = 0;
	flag = 0;
	while(counter < 11)
	{
		if (!ft_strncmp(line, array_pattern[counter],\
									ft_strlen(array_pattern[counter]) + 1))
		{
			array_funcs[counter](stack);
			++flag;
			ft_visualizer(stack, line);
			break;
		}
		++counter;
	}
	if (flag == 0)
		flag = !ft_strncmp(line, "",ft_strlen(line) + 1);
	free(line);
	return (flag);
}

int				ft_input_command(t_stack *stack)
{
	char		*line;
	
	while (get_next_line(0, &line) > 0)
		if(ft_exe_command(stack, line) == 0)
			return (1);
	return (!ft_exe_command(stack, line));
}
