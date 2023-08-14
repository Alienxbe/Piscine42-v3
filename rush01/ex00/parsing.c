/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:25:26 by marykman          #+#    #+#             */
/*   Updated: 2023/08/13 23:14:06 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	set_values(t_vars *vars, char c, int j)
{
	if (j < 4)
		vars->input.col_up[j % 4] = c - '0';
	else if (j < 8)
		vars->input.col_down[j % 4] = c - '0';
	else if (j < 12)
		vars->input.row_left[j % 4] = c - '0';
	else if (j < 16)
		vars->input.row_right[j % 4] = c - '0';
	else
		return (0);
	return (1);
}

/*
** Return 0 if error and 1 on success
*/
int	parsing(t_vars *vars, char *str)
{
	int	i;
	int	j;

	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (0);
			if (!set_values(vars, str[i], j))
				return (0);
			j++;
		}
		else if (str[i] != ' ' || j >= 16)
			return (0);
		i++;
	}
	if (j != 16)
		return (0);
	return (1);
}
