/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 20:54:03 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:49:06 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_H
# define COMMAND_H

# include "rdlist.h"
# include <unistd.h>

# define FOR_CHECKER		0b00000001
# define FOR_PUSH_SWAP		0b00000010

typedef struct		s_stack
{
	t_rdlist		*a;
	t_rdlist		*b;
	int				*sort_array;
	int				count_group;
}					t_stack;

/*
********************************************************************************
**************************************SWAP**************************************
********************************************************************************
*/

/*
** Поменять местами первые 2 элемента на вершине стека.
** Ничего не делать, если менее двух элементов в стеке.
*/
void				ft_cmd_swap(t_rdlist *head_stack);

/*
** Name command from the subject: sa
** Поменять местами первые 2 элемента на вершине стека а.
** Ничего не делать, если менее двух элементов в стеке.
*/
void				ft_cmd_swap_a(t_stack *prt_stack, int attributes);

/*
** Name command from the subject: sb
** Поменять местами первые 2 элемента на вершине стека b.
** Ничего не делать, если менее двух элементов в стеке.
*/
void				ft_cmd_swap_b(t_stack *prt_stack, int attributes);

/*
** Name command from the subject: ss
** Выполнить команды sa и sb одновременно.
*/
void				ft_cmd_swap_all(t_stack *prt_stack, int attributes);

/*
********************************************************************************
**************************************PUSH**************************************
********************************************************************************
*/

/*
** Берет первый элемент вверху стека first_stack и помещает его
** вверху стека second_stack.
** Ничего не делает, если first_stack пустой.
*/
void				ft_cmd_push(t_rdlist *first_stack, t_rdlist *second_stack);

/*
** Name command from the subject: pa
** Берет первый элемент вверху стека b и помещает его вверху стека a.
** Ничего не делает, если b пустой.
*/
void				ft_cmd_push_a(t_stack *prt_stack, int attributes);

/*
** Name command from the subject: pb
** Берет первый элемент вверху стека a и помещает его вверху стека b.
** Ничего не делает, если a пустой.
*/
void				ft_cmd_push_b(t_stack *prt_stack, int attributes);

/*
********************************************************************************
*************************************ROTATE*************************************
********************************************************************************
*/

/*
** Сдвигает вверх все элементы стека head_stack на 1.
** Первый элемент становится последним.
*/
void				ft_cmd_rotate(t_rdlist *head_stack);

/*
** Name command from the subject: ra
** Сдвигает вверх все элементы стека a на 1.
** Первый элемент становится последним.
*/
void				ft_cmd_rotate_a(t_stack *prt_stack, int attributes);

/*
** Name command from the subject: rb
** Сдвигает вверх все элементы стека b на 1.
** Первый элемент становится последним.
*/
void				ft_cmd_rotate_b(t_stack *prt_stack, int attributes);

/*
** Name command from the subject: rr
** Выполнить команды ra и rb одновременно.
*/
void				ft_cmd_rotate_all(t_stack *prt_stack, int attributes);

/*
********************************************************************************
***********************************VEV_ROTATE***********************************
********************************************************************************
*/

/*
** Сдвигает вниз все элементы стека head_stack на 1.
** Последний элемент становится первым.
*/
void				ft_cmd_rev_rotate(t_rdlist *head_stack);

/*
** Name command from the subject: rra
** Сдвигает вниз все элементы стека a на 1.
** Последний элемент становится первым.
*/
void				ft_cmd_rev_rotate_a(t_stack *prt_stack, int attributes);

/*
** Name command from the subject: rrb
** Сдвигает вниз все элементы стека b на 1.
** Последний элемент становится первым.
*/
void				ft_cmd_rev_rotate_b(t_stack *prt_stack, int attributes);

/*
** Name command from the subject: rrr
** Выполнить команды ra и rb одновременно.
*/
void				ft_cmd_rev_rotate_all(t_stack *prt_stack, int attributes);

#endif
