# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 20:53:49 by aberry            #+#    #+#              #
#    Updated: 2021/03/27 23:20:49 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY:	all clean fclean re

NAME		=	libvisual.a

CC			=	gcc

LIBS		=	$(addprefix  ../, libft rdlist command)

INC			=	$(addprefix -I, $(addsuffix /includes/, . $(LIBS)))

CFLAGS		=	$(INC) -Wall -Wextra -Werror 

FILES		= 	$(addprefix src/,\
					ft_visualizer.c\
					$(addprefix signature/,\
						print_command.c\
						print_info_stack.c\
						print_stack_name.c\
						signature.c\
					)\
					$(addprefix utils/,\
						print_info.c\
						print_separator.c\
						putnumber.c\
					)\
					$(addprefix stack/,\
						print_stack.c\
						print_stack_value.c\
					)\
				)\

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