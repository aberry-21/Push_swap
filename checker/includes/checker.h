/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:03:31 by aberry            #+#    #+#             */
/*   Updated: 2021/03/26 21:20:37 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include "libft.h"
#include "command.h"
#include "rdlist.h"

void		ft_exit(t_stack *stack, char *error_message, int exit_code);
void				ft_initialization_stack(\
									t_stack *stack,\
									char const *elements[],\
									int count_elem);
void				ft_print_stack(t_list *begin_stack);
#endif
