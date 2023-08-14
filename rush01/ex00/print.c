/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:34:40 by marykman          #+#    #+#             */
/*   Updated: 2023/08/13 14:58:22 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	print_tab(t_vars vars)
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(vars.tab[y][x] + '0');
			if (x != 3)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int	ft_error(char *error_msg, int error_val)
{
	write(2, error_msg, ft_strlen(error_msg));
	return (error_val);
}
