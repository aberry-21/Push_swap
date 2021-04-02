# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/02 16:43:54 by aberry            #+#    #+#              #
#    Updated: 2021/04/02 17:11:45 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIBS		=	$(addprefix ./tools/, command initialization libft rdlist visualizer)

EXE		=	

all: for library in $(LIBS) ; do \
		make -C $library ;\
	done
