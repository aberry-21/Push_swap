# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/30 16:23:34 by aberry            #+#    #+#              #
#    Updated: 2021/03/31 18:39:15 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

CC			=	gcc

LIBS		=	$(addprefix  ../tools/, command initialization libft rdlist visualizer)

INC			=	$(addprefix -I, $(addsuffix /includes/, . $(LIBS)))

CFLAGS		=	 -O3 -MMD $(INC) $(ADD_FLAGS) #-Wall -Wextra -Werror

FILES		= 	$(addprefix src/,\
					main.c\
					quick_sort.c\
					find_middlepoint.c\
					issort.c\
					prepare_sort.c\
					size_group.c\
					$(addprefix quick_sort_stack/,\
						quick_sort_stack_a.c\
						quick_sort_stack_b.c\
					)\
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
		make debug $(1) -C $$library ;\
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