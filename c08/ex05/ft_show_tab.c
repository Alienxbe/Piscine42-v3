/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 22:18:23 by marykman          #+#    #+#             */
/*   Updated: 2023/08/17 23:32:36 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putnbr(int n)
{
	unsigned int	un;

	un = n;
	if (n < 0)
	{
		ft_putchar('-');
		un = -n;
	}
	if (un >= 10)
		ft_putnbr(un / 10);
	ft_putchar(un % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (!par)
		return ;
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		par++;
	}
}
