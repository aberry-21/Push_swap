# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 12:49:40 by aberry            #+#    #+#              #
#    Updated: 2021/03/23 15:37:02 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:	all clean fclean re

NAME		=	librdlist.a

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror -I ./includes

NAME_FILES	=	ft_back.c             ft_front.c            ft_initializer_list.c ft_new_node.c         ft_push_back.c\

FILES		=	$(addprefix ./src/, $(NAME_FILES))

OBJS		=	$(FILES:.c=.o)

all:		${NAME}

${NAME}:	$(OBJS)
	ar rcs ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean all