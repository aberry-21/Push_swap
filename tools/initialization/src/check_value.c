/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:14:18 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 17:33:24 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initialization.h"

int			ft_isnumber(const char *line)
{
	size_t		counter;

	counter = 0;
	if (line[counter] == '-' || line[counter] == '+')
		++counter;
	while (line[counter])
	{
		if (ft_isdigit(line[counter]) == 0)
			return (false);
		++counter;
	}
	return (true);
}

int			ft_is_more_limit(int digit, const char *line)
{
	return (((line[0] == '-' && digit > 0) || (line[0] != '-' && digit < 0)));
}
