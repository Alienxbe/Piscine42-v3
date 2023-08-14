/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:58:32 by marykman          #+#    #+#             */
/*   Updated: 2023/08/13 23:16:31 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	init_vars(t_vars *vars)
{
	int	i;

	vars->isprinted = 0;
	i = 0;
	while (i < 16)
	{
		vars->tab[i / 4][i % 4] = 0;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		vars->input.col_up[i] = 0;
		vars->input.col_down[i] = 0;
		vars->input.row_left[i] = 0;
		vars->input.row_right[i] = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_vars	vars;

	if (argc != 2)
		return (ft_error("Error\n", 1));
	init_vars(&vars);
	if (!parsing(&vars, argv[1]))
		return (ft_error("Error\n", 2));
	solve(&vars);
	if (vars.isprinted == 0)
		return (ft_error("Error\n", 3));
	return (0);
}
