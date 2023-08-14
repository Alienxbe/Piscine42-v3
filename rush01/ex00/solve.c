/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:46:53 by marykman          #+#    #+#             */
/*   Updated: 2023/08/13 14:41:30 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	final_check(t_vars *vars)
{
	int	i;
	int	isok;

	i = 0;
	isok = 1;
	while (i < 4)
	{
		if (vars->isprinted == 1
			|| get_colup(vars->tab, i) != vars->input.col_up[i]
			|| get_coldown(vars->tab, i) != vars->input.col_down[i]
			|| get_rowleft(vars->tab, i) != vars->input.row_left[i]
			|| get_rowright(vars->tab, i) != vars->input.row_right[i])
			isok = 0;
		i++;
	}
	if (isok)
	{
		print_tab(*vars);
		vars->isprinted = 1;
	}
}

void	check_values(t_vars *vars, int x, int y)
{
	int	n;

	n = 1;
	while (n <= 4)
	{
		if (possible(vars, x, y, n))
		{
			vars->tab[y][x] = n;
			solve(vars);
			vars->tab[y][x] = 0;
		}
		n++;
	}
}

void	solve(t_vars *vars)
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (vars->tab[y][x] == 0)
			{
				check_values(vars, x, y);
				return ;
			}
			x++;
		}
		y++;
	}
	final_check(vars);
}
