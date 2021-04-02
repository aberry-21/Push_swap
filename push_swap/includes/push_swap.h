/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:03:31 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:39:26 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "includes.h"

void		ft_quick_sort(int arr[], int low, int fast);
void		ft_initialization_array(t_stack *stack, t_rdlist *head, int size);
int			ft_compare_less(int first, int second);
int			ft_compare_more(int first, int second);
int			ft_issort(t_rdlist *stack, int (*compare)(int, int), int last);
int			ft_get_middlepoint(t_stack *stack, t_rdlist *head, int size);
void		ft_prepare_stack(t_stack *stack);
int			ft_size_group(t_rdlist *head, int group);
void		ft_quick_sort_stack_a(t_stack *stack, int group);
void		ft_quick_sort_stack_b(t_stack *stack, int group);
void		ft_sort_three_elem_a(t_stack *stack);
int			ft_get_index_max_elem(t_rdlist *begin);
void		ft_operation_with_stack_a(t_stack *stack, int size);
void		ft_operation_with_stack_b(t_stack *stack, int size);
void		ft_set_stable_group(t_rdlist *head, int group);
void		ft_divide_and_conquer(t_stack *stack, int group, int size);
void		ft_push_all_to_stack_a(t_stack *stack, int group);
void		ft_quick_sort_stack(t_stack *stack);
#endif
