# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 23:35:34 by aberry            #+#    #+#              #
#    Updated: 2021/03/27 23:03:34 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	checker

CC			=	gcc

LIBS		=	$(addprefix  ../tools/, command initialization libft rdlist visualizer)

INC			=	$(addprefix -I, $(addsuffix /includes/, . $(LIBS)))

CFLAGS		=	-Wall -Wextra -Werror -O3 -MMD $(INC) $(ADD_FLAGS)

FILES		= 	$(addprefix src/,\
					main.c\
					exit.c\
					ft_input_command.c\
					ft_check_result.c\
				)

OBJS		=	$(FILES:.c=.o)
DEPENDS		=	$(OBJS:.o=.d)

all:		$(NAME)

debug:		CFLAGS	+= -fsanitize=address -g
debug:		all;

$(NAME):	$(OBJS) | tools
	${CC} ${CFLAGS} ${OBJS} $(addprefix -L, $(LIBS)) -lvisual -lft -lrdlist -lcmd -linit -o ${NAME}

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


