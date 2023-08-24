# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marykman <marykman@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 00:51:13 by marykman          #+#    #+#              #
#    Updated: 2023/08/24 02:40:35 by marykman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	do-op

SRCS		=	main.c \
				ft_operations.c \
				ft_print.c \
				ft_atoi.c \
				ft_index.c \
				ft_strlen.c
OBJS		=	$(addprefix srcs/, ${SRCS:.c=.o})
INCLUDES	=	-I./includes

%.o:		%.c
	${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@

${NAME}:	${OBJS}
	${CC} ${CLFAGS} $^ -o $@

all:		${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
