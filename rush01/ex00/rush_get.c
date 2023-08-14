/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:03:44 by randre            #+#    #+#             */
/*   Updated: 2023/08/13 14:51:06 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	get_colup(int tab[4][4], int x)
{
	int	y;
	int	count;
	int	max;

	y = 0;
	count = 0;
	max = 0;
	while (y < 4)
	{
		if (max < tab[y][x])
		{
			count++;
			max = tab[y][x];
		}
		y++;
	}
	return (count);
}

int	get_coldown(int tab[4][4], int x)
{
	int	y;
	int	count;
	int	max;

	y = 3;
	count = 0;
	max = 0;
	while (y >= 0)
	{
		if (max < tab[y][x])
		{
			count++;
			max = tab[y][x];
		}
		y--;
	}
	return (count);
}

int	get_rowleft(int tab[4][4], int y)
{
	int	x;
	int	count;
	int	max;

	x = 0;
	count = 0;
	max = 0;
	while (x < 4)
	{
		if (max < tab[y][x])
		{
			count++;
			max = tab[y][x];
		}
		x++;
	}
	return (count);
}

int	get_rowright(int tab[4][4], int y)
{
	int	x;
	int	count;
	int	max;

	x = 3;
	count = 0;
	max = 0;
	while (x >= 0)
	{
		if (max < tab[y][x])
		{
			count++;
			max = tab[y][x];
		}
		x--;
	}
	return (count);
}
