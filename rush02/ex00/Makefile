# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marykman <marykman@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 15:44:23 by marykman          #+#    #+#              #
#    Updated: 2023/08/20 23:18:12 by marykman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	-I./includes

SRCS		=	ft_atoi.c \
				ft_check.c \
				ft_error.c \
				ft_free.c \
				ft_generate_n_n.c \
				ft_generate_n.c \
				ft_generate_txt.c \
				ft_is.c \
				ft_look_up_dict.c \
				ft_print.c \
				ft_putchar.c \
				ft_putnbr.c \
				ft_putstr.c \
				ft_split.c \
				ft_strcatalloc.c \
				ft_strdup.c \
				ft_strlcpy.c \
				ft_strlen.c \
				main.c \
				parsing.c \
				read_file.c \
				utils.c \
				ft_str_is_digit.c

OBJS		=	$(addprefix srcs/, ${SRCS:.c=.o})

NAME		=	rush02

%.o:	%.c
	${GCC} ${INCLUDES} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
	${GCC} ${INCLUDES} ${CFLAGS} ${OBJS} -o $@

all:		${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
