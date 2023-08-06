/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:09:06 by rbelin-l          #+#    #+#             */
/*   Updated: 2023/08/06 19:28:24 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_cond(int x, int y, int var_x, int var_y)
{
	if (var_x == 0 && var_y == 0)
		ft_putchar('A');
	else if (var_x == x - 1 && var_y == 0)
		ft_putchar('C');
	else if (var_x == 0 && var_y == y - 1)
		ft_putchar('C');
	else if (var_x == x - 1 && var_y == y - 1)
		ft_putchar('A');
	else if (var_y == 0 || var_y == y - 1 || var_x == 0 || var_x == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	var_x;
	int	var_y;

	if (x <= 0 || y <= 0)
		return ;
	var_y = 0;
	while (var_y < y)
	{
		var_x = 0;
		while (var_x < x)
		{
			print_cond(x, y, var_x, var_y);
			var_x++;
		}
		ft_putchar('\n');
		var_y++;
	}
}
