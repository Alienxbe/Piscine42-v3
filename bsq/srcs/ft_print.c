/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:54:48 by marykman          #+#    #+#             */
/*   Updated: 2023/08/23 17:09:29 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

t_error	ft_print_error(char *msg, t_error error)
{
	ft_putstr_fd(msg, STDERR_FILENO);
	return (error);
}

void	ft_print_tab(t_data data)
{
	int	x;
	int	y;

	y = -1;
	while (++y < data.height)
	{
		x = -1;
		while (++x < data.width)
			ft_putchar(data.tab[y][x]);
		ft_putchar('\n');
	}
}

void	ft_print_sqr(t_data data, t_sqr sqr)
{
	int	i;
	int	j;

	i = -1;
	while (++i < sqr.size)
	{
		j = -1;
		while (++j < sqr.size)
		{
			data.tab[sqr.y + i][sqr.x + j] = data.chars.full;
		}
	}
}
