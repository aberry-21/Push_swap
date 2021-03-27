/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:03:31 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 23:01:56 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include "includes.h"

void		ft_exit(t_stack *stack, char *error_message, int exit_code);
int			ft_input_command(t_stack *stack);
int			ft_check_result(t_stack *stack);

#endif
