/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:50:42 by marykman          #+#    #+#             */
/*   Updated: 2023/08/02 13:50:43 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 99)
	{
		j = i;
		while (++j < 100)
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putnbr(j);
			if (!(i == 98 & j == 99))
				write(1, ", ", 2);
		}
	}
}
