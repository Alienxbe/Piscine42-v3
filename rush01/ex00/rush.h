/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:28:44 by marykman          #+#    #+#             */
/*   Updated: 2023/08/13 14:28:42 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

typedef struct s_input
{
	int	col_up[4];
	int	col_down[4];
	int	row_left[4];
	int	row_right[4];
}	t_input;

typedef struct s_vars
{
	int		tab[4][4];
	int		isprinted;
	t_input	input;
}	t_vars;

// Main functions
int		parsing(t_vars *vars, char *str);
int		possible(t_vars *vars, int x, int y, int n);
void	solve(t_vars *vars);

// Get functions
int		get_colup(int tab[4][4], int x);
int		get_coldown(int tab[4][4], int x);
int		get_rowleft(int tab[4][4], int y);
int		get_rowright(int tab[4][4], int y);

// Prints
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_tab(t_vars vars);
int		ft_error(char *error_msg, int error_val);

// Utils
int		ft_strlen(char *str);

#endif
