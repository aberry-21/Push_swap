/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:14:18 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 21:09:07 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initialization.h"
#include <limits.h>

int			ft_isnumber(const char *line)
{
	size_t		counter;

	counter = 0;
	
	if (line[counter] == '-' || line[counter] == '+')
	{
		if (ft_strlen(line) == 1)
			return (false);
		++counter;
	}
	while (line[counter])
	{
		if (ft_isdigit(line[counter]) == 0)
			return (false);
		++counter;
	}
	return (true);
}

int			ft_is_more_limit(long number, const char *line)
{
	return ((number > (long)INT_MAX) || (number < (long)INT_MIN)\
												|| ft_strlen(line) > 11);
}
