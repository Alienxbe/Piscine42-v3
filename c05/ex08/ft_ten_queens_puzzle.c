/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:01:44 by marykman          #+#    #+#             */
/*   Updated: 2023/08/15 01:11:28 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(int tab[10][10])
{
	int	x;
	int	y;

	y = -1;
	while (++y < 10)
	{
		x = 0;
		while (!tab[y][x])
			x++;
		ft_putchar(x + '0');
	}
	ft_putchar('\n');
}

int	possible(int tab[10][10], int x, int y)
{
	int	i;

	i = -1;
	while (++i < 10)
		if (tab[i][x] || tab[y][i]
			|| (x + i < 10 && y + i < 10 && tab[y + i][x + i])
			|| (x + i < 10 && y - i >= 0 && tab[y - i][x + i])
			|| (x - i >= 0 && y - i >= 0 && tab[y - i][x - i])
			|| (x - i >= 0 && y + i < 10 && tab[y + i][x - i]))
			return (0);
	return (1);
}

void	solve(int tab[10][10], int *count, int y)
{
	int	x;

	if (y == 10)
	{
		print_tab(tab);
		(*count)++;
		return ;
	}
	x = -1;
	while (++x < 10)
	{
		if (possible(tab, x, y))
		{
			tab[y][x] = 1;
			solve(tab, count, y + 1);
			tab[y][x] = 0;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10][10];
	int	count;
	int	i;

	i = -1;
	while (++i < 100)
		tab[i / 10][i % 10] = 0;
	count = 0;
	solve(tab, &count, 0);
	return (count);
}
