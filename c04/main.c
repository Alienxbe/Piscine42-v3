/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:32:54 by marykman          #+#    #+#             */
/*   Updated: 2023/08/12 16:30:30 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

typedef int**	t_tab;

typedef struct	s_input
{
	int	col_up[4];
	int	col_down[4];
	int	raw_left[4];
	int	raw_right[4];
}				t_input;

typedef struct s_vars
{
	int		tab[4][4];
	t_input	input;
}	t_vars;

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

int	main(void)
{
	t_tab	tab;
	struct s_vars	vars;
	t_vars	vars;

	vars.input.col_up[0] = 1;
	vars.input.col_up[1] = 3;
	vars.input.col_up[2] = 2;
	vars.input.col_up[3] = 2;

	char	*n = "\t\v\n\r\f ++++-+--+f100fah";
	char	*base = "0123456789abcdef";

	printf("%d\n", ft_atoi_base(n, base));
}
