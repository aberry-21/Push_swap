# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/30 16:23:34 by aberry            #+#    #+#              #
#    Updated: 2021/04/02 17:17:42 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

CC			=	gcc

LIBS		=	$(addprefix  ../tools/, command initialization libft rdlist visualizer)

INC			=	$(addprefix -I, $(addsuffix /includes/, . $(LIBS)))

CFLAGS		=	 -O3 -MMD $(INC) -Wall -Wextra -Werror

FILES		= 	$(addprefix src/,\
					main.c\
					$(addprefix quick_sort_stack/,\
						prepare_stack.c\
						all_sort_stack.c\
						$(addprefix stack_a/,\
							divide_and_conquer.c\
							main_algo.c\
							operation.c\
							set_stable_group.c\
							sort_three_elem.c\
						)\
						$(addprefix stack_b/,\
							operation.c\
							push_all.c\
							main_algo.c\
						)\
					)\
					$(addprefix utils/,\
						get_index_max_elem.c\
						initialization_array.c\
						quick_sort.c\
						get_middlepoint.c\
						issort.c\
						size_group.c\
					)\
				)

OBJS		=	$(FILES:.c=.o)
DEPENDS		=	$(OBJS:.o=.d)

all:		$(NAME)

debug:		CFLAGS	+= -fsanitize=address -g
debug:		all;

$(NAME):	$(OBJS)
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
