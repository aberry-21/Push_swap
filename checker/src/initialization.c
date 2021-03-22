/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:36:11 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 00:18:22 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

#include "checker.h"


static int			ft_isnumber(const char *line)
{
	size_t		counter;

	counter = 0;
	while (line[counter])
	{
		if (ft_isdigit(line[counter]) == 0)
			return (false);
		++counter;
	}
	return (true);
}

static t_list		*ft_lst_find_data(t_list *begin, int target)
{
	while (begin)
	{
		if ((int)begin->content == target)
			return (begin);
		begin = begin->next;
	}
	return (begin);
}

static int			ft_check_duplicate_data(t_list *begin)
{
	t_list			*slow;
	t_list			*fast;

	slow = begin;
	fast = slow->next;
	while (slow)
	{
		if (ft_lst_find_data(fast, (int)slow->content))
			return (true);
		slow = fast;
		fast = fast->next;
	}
	return (false);
}

void				ft_print_stack(t_list *begin_stack)
{
	while (begin_stack)
	{
		ft_putnbr_fd((int)begin_stack->content, 0);
		ft_putendl_fd("", 0);
		begin_stack = begin_stack->next;
	}
}

void				ft_initialization_stack(\
									t_stack *stack,\
									char const *elements[],\
									int count_elem)
{
	t_list		*new_elem;

	new_elem = (t_list *)0;
	while (count_elem)
	{
		if (ft_isnumber(elements[count_elem]) == 0)
			ft_exit(stack, "Error", 1);
		new_elem = ft_lstnew((void *)0);
		new_elem->content += ft_atoi(elements[count_elem]);
		if (!new_elem)
			ft_exit(stack, "Error", 1);
		ft_lstadd_front(&stack->a, new_elem);
		--count_elem;
	}
	if (ft_check_duplicate_data(stack->a))
		ft_exit(stack, "Error", 1);
}
