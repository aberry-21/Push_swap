# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 12:49:40 by aberry            #+#    #+#              #
#    Updated: 2021/03/27 23:20:37 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:	all clean fclean re

NAME		=	librdlist.a

CC			=	gcc

CFLAGS		=	 -I ./includes -Wall -Wextra -Werror 

NAME_FILES	=	ft_create_node.c\
				ft_back.c\
				ft_front.c\
				ft_push_back_node.c\
				ft_push_back_value.c\
				ft_push_front_node.c\
				ft_push_front_value.c\
				ft_pop_back.c\
				ft_pop_front.c\
				ft_rdlstdelone.c\
				ft_rdlstsize.c\
				ft_rdlstclear.c\
				ft_push_front_value.c\
				ft_insert_value.c\
				ft_insert_node.c\
				ft_initializer_list.c\
				ft_swap_node.c\
				ft_swap_value.c\
				ft_get_node.c\
				ft_cut_node.c

FILES		=	$(addprefix ./src/, $(NAME_FILES))

OBJS		=	$(FILES:.c=.o)

all:		${NAME}

debug:		CFLAGS	+= -fsanitize=address -g
debug:		all;

${NAME}:	$(OBJS)
	ar rcs ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean all