# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsembel <thsembel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/26 21:46:59 by thsembel          #+#    #+#              #
#    Updated: 2022/01/06 18:58:00 by thsembel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NC = \033[0m
RED = \033[0;91m
ORANGE = \033[93m
GREEN = \033[0;92m
PURPLE = \033[0;95m
BLUE = \033[0;34m
BOLD = \033[1m

SRCS		=	./srcs/main.cpp \
				./srcs/puzzle.cpp \
				./srcs/parsing.cpp

INCLUDES	=	./includes/n_puzzle.hpp \
				./includes/puzzle.hpp

HEAD		= ./includes/


NAME		= n-puzzle

CC			= clang++

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -g -fsanitize=address

.c.o:
		@${CC} ${CFLAGS} -I${HEAD} -c $< -o ${<:.cpp=.o}
		@echo "${GREEN}[ OK ]	${ORANGE}${<:.s=.o}${NC}"


all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} ${LFLAGS} -I${HEAD} -o ${NAME} $(OBJS) ${LIBFT} ${MLX}
			@echo "n-puzzle		has been created\n${NC}"


clean:
			@${RM} ${OBJS}
			@echo "${GREEN}[ OK ]${RED}	*.o files	deleted${NC}"

fclean:		clean
			@${RM} ${NAME}
			@echo "${GREEN}[ OK ]${RED}	n-puzzle 	deleted${NC}"

re :		fclean all

.PHONY:		all	clean	fclean re
