/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:12 by marykman          #+#    #+#             */
/*   Updated: 2023/08/23 22:07:47 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

/*
** Function that test if the given square fit in his position
** depending on obstacles an map size
*/
int	sqr_fit(t_data data, t_sqr sqr)
{
	int	i;
	int	j;

	i = -1;
	while (++i < sqr.size)
	{
		j = -1;
		while (++j < sqr.size)
		{
			if (sqr.x + i >= data.width || sqr.y + j >= data.height)
				return (0);
			if (data.tab[sqr.y + j][sqr.x + i] == data.chars.obstacle)
				return (0);
		}
	}
	return (1);
}

/*
** Fonction that find the biggest sqr in a X Y coordinate
*/
t_sqr	find_bsq(t_data data, int x, int y, t_sqr max)
{
	t_sqr	bsq;

	bsq = (t_sqr){max.size, x, y};
	while (sqr_fit(data, bsq))
		bsq.size++;
	bsq.size--;
	return (bsq);
}

/*
** Return the bigguest square size and position
*/
t_sqr	solve(t_data data)
{
	t_sqr	max;
	t_sqr	bsq;
	int		x;
	int		y;

	max = (t_sqr){0};
	y = -1;
	while (++y < data.height)
	{
		x = -1;
		while (++x < data.width)
		{
			if (data.tab[y][x] == data.chars.empty)
			{
				bsq = find_bsq(data, x, y, max);
				if (bsq.size > max.size)
					max = bsq;
			}
		}
	}
	return (max);
}
