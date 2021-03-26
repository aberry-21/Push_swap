# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 20:53:49 by aberry            #+#    #+#              #
#    Updated: 2021/03/26 21:17:59 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY:	all clean fclean re

NAME		=	libcmd.a

CC			=	gcc 

CFLAGS		=	 -I ./includes -I ../rdlist/includes/ -Wall -Wextra -Werror 

FILES		=	$(addprefix src/,\
					$(addprefix push/,\
						ft_cmd_push.c ft_cmd_push_a.c ft_cmd_push_b.c\
					)\
					$(addprefix swap/,\
						ft_cmd_swap.c ft_cmd_swap_a.c ft_cmd_swap_all.c ft_cmd_swap_b.c\
					)\
					$(addprefix rotate/,\
						ft_cmd_rotate.c ft_cmd_rotate_a.c ft_cmd_rotate_all.c ft_cmd_rotate_b.c\
					)\
					$(addprefix reverse_rotate/,\
						ft_cmd_rev_rotate.c ft_cmd_rev_rotate_a.c ft_cmd_rev_rotate_all.c ft_cmd_rev_rotate_b.c\
					)\
				)
OBJS		=	$(FILES:.c=.o)

all:		${NAME}

${NAME}:	$(OBJS)
	ar rcs ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean all