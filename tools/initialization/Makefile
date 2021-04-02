# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 20:53:49 by aberry            #+#    #+#              #
#    Updated: 2021/04/02 16:10:57 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY:	all clean fclean re

NAME		=	libinit.a

CC			=	gcc

LIBS		=	$(addprefix  ../, libft rdlist command)

INC			=	$(addprefix -I, $(addsuffix /includes/, . $(LIBS)))

CFLAGS		=	$(INC) -Wall -Wextra -Werror 

FILES		=	$(addprefix src/,\
					check_duplicate.c\
					check_value.c\
					initialization.c\
					ft_exit.c\
					ft_init_stack.c\
					get_number.c\
				)
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