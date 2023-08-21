# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marykman <marykman@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 11:42:46 by marykman          #+#    #+#              #
#    Updated: 2023/08/21 10:35:56 by marykman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	libft.a

INCLUDES	=	-I./includes

SRCS		=	ft_putchar.c \
				ft_swap.c \
				ft_putstr.c \
				ft_strlen.c \
				ft_strcmp.c

OBJS		=	$(addprefix srcs/, ${SRCS:.c=.o})


%.o:		%.c
	${CC} ${INCLUDES} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
	ar -rcs $@ $^

all:		${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
