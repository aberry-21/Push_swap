# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 23:35:34 by aberry            #+#    #+#              #
#    Updated: 2021/03/26 21:18:31 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	checker

CC			=	gcc

LIBS		=	$(addprefix  ../tools/, libft rdlist command)

INC			=	$(addprefix -I, $(addsuffix /includes/, . $(LIBS)))

CFLAGS		=	-Wall -Wextra -Werror -O3 -MMD $(INC) $(ADD_FLAGS)

FILES		= 	$(addprefix src/,\
					main.c\
					)

OBJS		=	$(FILES:.c=.o)
DEPENDS		=	$(OBJS:.o=.d)

all:		$(NAME)

debug:		CFLAGS	+= -fsanitize=address -g
debug:		all;

$(NAME):	$(OBJS) | tools
	${CC} ${CFLAGS} ${OBJS} $(addprefix -L, $(LIBS)) -lft -lrdlist -lcmd -o ${NAME}

define		ft_tools
	for library in $(LIBS) ; do \
		make $(1) -C $$library ;\
	done
endef

tools:
	$(call ft_tools, )

clean:
	$(call ft_tools, clean)
	rm -rf ${OBJS} ${DEPENDS}

fclean:		clean
	rm -rf ${NAME}
	$(call ft_tools, fclean)

re:			fclean all

-include ${DEPENDS}


