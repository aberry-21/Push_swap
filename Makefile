# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/02 16:43:54 by aberry            #+#    #+#              #
#    Updated: 2021/04/02 21:17:12 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:		all re clean fclean

LIBS		=	$(addprefix ./tools/, command/ initialization/ libft/ rdlist/ visualizer/)

EXE			=	./checker\
				./push_swap\

define		ft_tools
	for library in $(LIBS) ; do \
		make $(1) -C $$library ;\
	done
endef

define		ft_exe
	for exe in $(EXE) ; do \
		make $(1) -C $$exe ;\
	done
endef

all:
		$(call ft_tools, )
		$(call ft_exe, )
		
clean:
	$(call ft_tools, clean)
	$(call ft_exe, clean)

fclean:		clean
	$(call ft_tools, fclean)
	$(call ft_exe, fclean)

debug:
	$(call ft_tools, debug)
	$(call ft_exe, debug)

re:			fclean all