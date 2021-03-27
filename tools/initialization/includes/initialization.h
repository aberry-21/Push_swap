/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:28:23 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 21:18:32 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALIZATION_H
# define INITIALIZATION_H

#include "libft.h"
#include "rdlist.h"
#include "command.h"
#include <stdbool.h>

int			ft_check_duplicate_data(t_rdlist *begin);
int			ft_isnumber(const char *line);
int			ft_is_more_limit(int digit, const char *line);
int			ft_initialization_stack(\
							t_stack *stack,\
							char const *elements[],\
							int count_elem);

#endif