/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:37:29 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 23:00:39 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISUALIZER_H
# define VISUALIZER_H

# include "libft.h"
# include "rdlist.h"
# include "command.h"

void			ft_print_command(char *message);
void			ft_putnumber_fd(int nb, int fd);
void			ft_print_signature(t_stack *stack, char *message);
void			ft_print_separator(char symbol, int count);
void			ft_print_info(char *signature);
void			ft_print_stack_name(void);
void			ft_print_info_stack(t_stack *stack);
void			ft_print_stack(t_stack *stack);
t_rdlist		*ft_print_stack_value(\
									int count,\
									t_rdlist *head_stack,\
									t_rdlist *current);
void			ft_visualizer(t_stack *stack, char *message);

#endif
