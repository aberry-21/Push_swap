/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rdlist.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:50:51 by aberry            #+#    #+#             */
/*   Updated: 2021/04/02 22:55:45 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RDLIST_H
# define RDLIST_H

# include <stdlib.h>

typedef struct		s_rdlist
{
	void			*value;
	int				group;
	struct s_rdlist	*next;
	struct s_rdlist	*prev;
}					t_rdlist;

/*
** Создает двусвязный список с value, возвращает новый элемент
*/
t_rdlist			*ft_create_node(void *value);

/*
** Создает двусвязный список с head_node, у которой size = 0
*/
t_rdlist			*ft_initializer_list(void);

/*
** Возвращает последний элемент двусвязного списка
*/
t_rdlist			*ft_back(t_rdlist *head);

/*
** Возвращает первый элемент двусвязного списка
*/
t_rdlist			*ft_front(t_rdlist *head);

/*
** Добавить элемент new_node слева от current
*/
void				ft_insert_node(t_rdlist *head, t_rdlist *position,\
															t_rdlist *new_node);

/*
** Добавить новый элемент с value слева от curren,
** возвращает новый элемент
*/
t_rdlist			*ft_insert_value(t_rdlist *head, t_rdlist *position,\
																void *value);

/*
** Добавить элемент new_node в конец двусвязного списка head
*/
void				ft_push_back_node(t_rdlist **head, t_rdlist *new_node);

/*
** Добавить новый элемент с value в конец двусвязного списка head,
** возвращает новый элемент
*/
t_rdlist			*ft_push_back_value(t_rdlist **head, void *value);

/*
** Добавить элемент new_node в начало двусвязного списка head
*/
void				ft_push_front_node(t_rdlist **head, t_rdlist *new_node);

/*
** Добавить новый элемент с value, в начало двусвязного списка head,
** возвращает новый элемент
*/
t_rdlist			*ft_push_front_value(t_rdlist **head, void *value);

/*
** Удалить элемент new_node в конце двусвязного списка
*/
void				ft_pop_back(t_rdlist **head, void (*del)(void*));

/*
** Удалить элемент new_node в конце двусвязного списка
*/
void				ft_pop_front(t_rdlist **head, void (*del)(void*));

/*
** Удалить элемент node в двусвязном списке
*/
void				ft_rdlstdelone(t_rdlist *head, t_rdlist *node,
															void (*del)(void*));

/*
** Посчитать количество всех элементов в списке head
*/
int					ft_rdlstsize(t_rdlist *head);

/*
** Удалить двухсвязный список lst со всеми элементами, через функцию del
*/
void				ft_rdlstclear(t_rdlist **head, void (*del)(void*));

/*
** Поменять элементы листа местами
*/
void				ft_swap_node(t_rdlist *first_node, t_rdlist *second_node);

/*
** Поменять значения нод местами
*/
void				ft_swap_value(t_rdlist *first_node, t_rdlist *second_node);

/*
** Получить элемент по индексу, возвращает указатель на элемент
*/
t_rdlist			*ft_get_node(t_rdlist *head, int index);

/*
** Отвязать элемент node от двусвязного списка
** Возвращает указатель на этот элемент
*/
t_rdlist			*ft_cut_node(t_rdlist *head, t_rdlist *node);

#endif
