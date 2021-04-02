/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_command.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:07:43 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:37:56 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int			ft_exe_command(t_stack *stack, char *line)
{
	static char		cmd[11][4] = {"sa", "sb", "ss", "pa", "pb", "ra",\
											"rb", "rr", "rra", "rrb", "rrr"};
	static void		(*array_funcs[])(t_stack *prt_stack, int attributes) = {
		ft_cmd_swap_a, ft_cmd_swap_b, ft_cmd_swap_all, ft_cmd_push_a,\
		ft_cmd_push_b, ft_cmd_rotate_a, ft_cmd_rotate_b, ft_cmd_rotate_all,\
		ft_cmd_rev_rotate_a, ft_cmd_rev_rotate_b, ft_cmd_rev_rotate_all};
	int				counter;
	int				flag;

	counter = 0;
	flag = 0;
	while (counter < 11)
	{
		if (!ft_strncmp(line, cmd[counter], ft_strlen(cmd[counter]) + 1))
		{
			array_funcs[counter](stack, FOR_CHECKER);
			++flag;
			ft_visualizer(stack, line);
			break ;
		}
		++counter;
	}
	flag = (flag == 0) ? !ft_strncmp(line, "", ft_strlen(line) + 1) : flag;
	free(line);
	return (flag);
}

int					ft_input_command(t_stack *stack)
{
	char			*line;

	while (get_next_line(0, &line) > 0)
		if (ft_exe_command(stack, line) == 0)
			return (1);
	return (!ft_exe_command(stack, line));
}
