/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnumber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:59:04 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 20:32:09 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

static int		ft_size_number(int nbr)
{
	int		size;
	long	number;

	size = 0;
	number = nbr;
	if (number < 0)
	{
		number *= -1;
		++size;
	}
	if (number / 10 == 0)
		return (++size);
	else
		while (number > 0) 
		{
			number = number / 10;
			++size;
		}
	return (size);
}

void			ft_putnumber_fd(int nb, int fd)
{
	int			size;
	int			len;

	size = 28;
	ft_print_separator(' ', size / 2);
	if (size % 2)
		++size;
	len = 11 - ft_size_number(nb);
	ft_print_separator(' ', len / 2);
	ft_putnbr_fd(nb, fd);
	if (len % 2)
		++len;
	ft_print_separator(' ', len / 2);
	ft_print_separator(' ', size / 2);
}