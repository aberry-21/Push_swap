# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 23:35:34 by aberry            #+#    #+#              #
#    Updated: 2021/03/22 23:56:53 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:		all re clean fclean tools

NAME		=	checker

CC			=	gcc

LIBFT_DIR = ../tools/libft/
LIBFT_H = -I $(LIBFT_DIR)
LIBFT_A = libft.a
LIBFT = $(LIBFT_DIR)$(LIBFT_A)

INC			=	$(LIBFT_H) -I ./includes/

ADD_FLAGS	=	#-Wall -Wextra -Werror

CFLAGS		=	-O3 -MMD $(INC) $(ADD_FLAGS)

FILES		= 	$(addprefix src/,\
					main.c\
					initialization.c\
					exit.c\
					)

OBJS		=	$(FILES:.c=.o)
DEPENDS		=	$(OBJS:.o=.d)

all:		$(NAME) aberry

$(NAME):	$(OBJS)
	${CC} ${CFLAGS} ${OBJS} $(LIBFT) -o ${NAME}

clean:
	rm -rf ${OBJS} ${DEPENDS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean all

debug:		CFLAGS	+= -fsanitize=address -g
debug:		all;

aberry:
	@echo "\033[36m\
	░█████╗░██████╗░███████╗██████╗░██████╗░██╗░░░██╗░░░░░░██████╗░░░███╗░░\n\
	██╔══██╗██╔══██╗██╔════╝██╔══██╗██╔══██╗╚██╗░██╔╝░░░░░░╚════██╗░████║░░\n\
	███████║██████╦╝█████╗░░██████╔╝██████╔╝░╚████╔╝░█████╗░░███╔═╝██╔██║░░\n\
	██╔══██║██╔══██╗██╔══╝░░██╔══██╗██╔══██╗░░╚██╔╝░░╚════╝██╔══╝░░╚═╝██║░░\n\
	██║░░██║██████╦╝███████╗██║░░██║██║░░██║░░░██║░░░░░░░░░███████╗███████╗\n\
	╚═╝░░╚═╝╚═════╝░╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░░░░░░░╚══════╝╚══════╝\033[0m"

-include ${DEPENDS}%
