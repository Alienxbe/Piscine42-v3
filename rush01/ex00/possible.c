/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:15:25 by randre            #+#    #+#             */
/*   Updated: 2023/08/13 14:47:53 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_row(int tab[4][4], int x, int y, int n)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[y][i] == n && i != x)
			return (0);
		i++;
	}
	return (1);
}

int	check_col(int tab[4][4], int x, int y, int n)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[i][x] == n && i != y)
			return (0);
		i++;
	}
	return (1);
}

int	possible(t_vars *vars, int x, int y, int n)
{
	vars->tab[y][x] = n;
	if (check_row(vars->tab, x, y, n) == 1
		&& check_col(vars->tab, x, y, n) == 1
		&& get_colup(vars->tab, x) <= vars->input.col_up[x]
		&& get_rowleft(vars->tab, y) <= vars->input.row_left[y])
		return (1);
	vars->tab[y][x] = 0;
	return (0);
}
