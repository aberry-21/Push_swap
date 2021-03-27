/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_separator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:00:28 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 19:00:29 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void		ft_print_separator(char symbol, int count)
{
	int			counter;

	counter = 0;
	while (counter < count)
	{
		ft_putchar_fd(symbol, 1);
		++counter;
	}
}
