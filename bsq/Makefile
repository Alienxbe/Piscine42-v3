# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marykman <marykman@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 11:13:40 by marykman          #+#    #+#              #
#    Updated: 2023/08/23 16:45:59 by marykman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	bsq

INCLUDES	=	-I./includes

SRCS		=	ft_is.c \
				ft_print.c \
				get_next_line.c \
				get_next_line_utils.c \
				main.c \
				parsing.c \
				solve.c \
				utils.c

OBJS		=	$(addprefix srcs/, ${SRCS:.c=.o})

%.o:		%.c
	${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@

${NAME}:	${OBJS}
	${CC} ${CFLAGS} ${INCLUDES} $^ -o $@

all:		${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re