/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:07:33 by aberry            #+#    #+#             */
/*   Updated: 2021/03/27 19:07:45 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void			ft_print_info(char *signature)
{
	int			size;

	size = 39;
	if (signature)
		size -= ft_strlen(signature);
	ft_print_separator(' ', size / 2);
	if (size % 2)
		++size;
	ft_putstr_fd(signature, 1);
	ft_print_separator(' ', size / 2);
}
