/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:03:31 by aberry            #+#    #+#             */
/*   Updated: 2021/03/31 18:47:43 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "includes.h"

void			ft_quick_sort(int *array, int first, int last);
int				ft_find_middlepoint(int *array, t_rdlist *head, int last);
int				ft_compare_less(int first, int second);
int				ft_compare_more(int first, int second);
int				ft_issort(t_rdlist *stack, int (*compare)(int, int), int last);
int				ft_prepare_for_sort(t_stack *stack, int step);
int				ft_size_group(t_rdlist *begin_stack, int group);
void			ft_quick_sort_stack_a(t_stack *stack, int group);
void			ft_quick_sort_stack_b(t_stack *stack, int group);
#endif
