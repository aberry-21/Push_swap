/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 16:05:00 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 16:26:14 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initialization.h"

static int		ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

long			ft_get_number(const char *str)
{
	long	b;
	int		c;

	b = 0;
	c = 0;
	while (ft_isspace(*str))
		str++;
	c = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
		b = b * 10 + *str++ - '0';
	return ((long)b * c);
}
