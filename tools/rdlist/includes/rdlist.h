/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rdlist.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:50:51 by aberry            #+#    #+#             */
/*   Updated: 2021/03/23 15:29:05 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RDLIST_H
# define RDLIST_H

# include <stdlib.h>

typedef struct		s_rdlist
{
	void			*value;
	struct s_rdlist	*next;
	struct s_rdlist	*prev;
}					t_rdlist;

t_rdlist				*ft_initializer_list(void);

t_rdlist				*ft_new_node(void *value);

void			ft_push_back(t_rdlist **head, t_rdlist *new_node);

t_rdlist		*ft_back(t_rdlist *head);
t_rdlist		*ft_front(t_rdlist *head);

// /*
// ** Добавить элемент new в левое начало двухсвязного списка dlst
// */
// void				ft_dlstadd_left(t_dlist **dlst, t_dlist *new);

// /*
// ** Добавить элемент new в правый конец двухсвязного списка dlst
// */
// void				ft_dlstadd_right(t_dlist **dlst, t_dlist *new);

// /*
// ** Добавить новый элемент с content, в правый конец двухсвязного списка dlst,
// ** возвращает новый элемент
// */
// t_dlist				*ft_dlstadd_right_content(t_dlist **dlst, void *content);

// /*
// ** Добавить новый элемент с content, в левое начало двухсвязного списка dlst,
// ** возвращает новый элемент
// */
// t_dlist				*ft_dlstadd_left_content(t_dlist **dlst, void *content);

// /*
// ** Добавить элемент в сортированный двухсвязный список,
// ** дополнительно принимает функцию сравнения,
// ** если функция выдаст число больше 0 при (new, elem),
// ** new поставиться перед elem
// */
// void				ft_dlstadd_sort(t_dlist **dlst, t_dlist *new,
// 						int (*f)(void *, void *));

// /*
// ** Сделать взаимосвязь между left и right
// */
// void				ft_dlstrelation(t_dlist *left, t_dlist *right);

// /*
// ** Вставить элемент center между left и right
// */
// void				ft_dlstinsert(t_dlist *left, t_dlist *center,\
// 									t_dlist *right);

// /*
// ** Посчитать количество всех элементов в списке dlst
// */
// int					ft_dlstsize(t_dlist *dlst);

// /*
// ** Посчитать количество элементов левее dlst включительно
// */
// int					ft_dlstsize_left(t_dlist *dlst);

// /*
// ** Посчитать количество элементов левее dlst включительно
// */
// int					ft_dlstsize_right(t_dlist *dlst);

// /*
// ** Достать самый правый элемент двухсвязного списка lst
// */
// t_dlist				*ft_dlstright(t_dlist *lst);

// /*
// ** Достать самый левый элемент двухсвязного списка lst
// */
// t_dlist				*ft_dlstleft(t_dlist *dlst);

// /*
// ** Удалить элемент lst с помощью функции del
// */
// void				ft_dlstdelone(t_dlist *lst, void (*del)(void*));

// /*
// ** Удалить двухсвязный список lst со всеми элементами, через функцию del
// ** удаление идёт слева направо
// */
// void				ft_dlstclear(t_dlist **lst, void (*del)(void*));

// /*
// ** Удалить элементы левее двухсвязного списка lst включительно,
// ** удаление идёт справа налево, с удалением контента через функцию del
// */
// void				ft_dlstclear_left(t_dlist **dlst, void (*del)(void*));

// /*
// ** Удалить элементы правее двухсвязного списка lst включительно,
// ** удаление идёт слева направо, с удалением контента через функцию del
// */
// void				ft_dlstclear_right(t_dlist **dlst, void (*del)(void*));

// /*
// ** Применить функцию f ко всем элементам списка dlst
// ** применение будет идти справа налево
// */
// void				ft_dlstiter_all_left(t_dlist *dlst, void (*f)(void *));

// /*
// ** Применить функцию f ко всем элементам списка dlst
// ** применение будет идти слева направо
// */
// void				ft_dlstiter_all_right(t_dlist *dlst, void (*f)(void *));

// /*
// ** Применить функцию f к элементам правее dlst, включительно
// ** применение будет идти слева направо
// */
// void				ft_dlstiter_right(t_dlist *dlst, void (*f)(void *));

// /*
// ** Применить функцию f к элементам левее dlst, включительно
// ** применение будет идти справа налево
// */
// void				ft_dlstiter_left(t_dlist *dlst, void (*f)(void *));

// /*
// ** Применить функцию f ко элементам dlst,
// ** применение будет идти слева направо,
// ** аргументная функция дополнительно принимает индекс начиная слева
// */
// void				ft_dlstiteri(t_dlist *dlst, void (*f)(size_t, void *));

// /*
// ** Применить функцию f к элементам правее dlst, включительно
// ** применение будет идти слева направо,
// ** аргументная функция дополнительно принимает индекс листа (dlst - 0 индекс)
// */
// void				ft_dlstiteri_right(t_dlist *dlst,\
// 								void (*f)(size_t, void *));

// /*
// ** Копирует левую часть двухсвязного списка из списка dlist включительно,
// ** Порядок остаётся неизменным, в случае неудачи, применяет функцию del
// */
// t_dlist				*ft_dlstcopy_left(t_dlist *dlist, void (*del)(void *));

// /*
// ** Копирует правую часть двухсвязного списка из списка dlist включительно,
// ** Порядок остаётся неизменным, в случае неудачи, применяет функцию del
// */
// t_dlist				*ft_dlstcopy_right(t_dlist *dlist, void (*del)(void *));

// /*
// ** Создать новый двухсвязный список из списка dlst,
// ** применив к каждому элементу функцию f
// ** в случае неудачи, применяет функцию del
// */
// t_dlist				*ft_dlstmap(t_dlist *lst, void *(*f)(void *),\
// 								void (*del)(void *));

#endif
