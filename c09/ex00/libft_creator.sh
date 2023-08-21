# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marykman <marykman@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 11:34:58 by marykman          #+#    #+#              #
#    Updated: 2023/08/18 11:42:07 by marykman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar -rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
