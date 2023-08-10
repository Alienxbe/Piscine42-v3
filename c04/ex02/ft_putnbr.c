/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:44:32 by marykman          #+#    #+#             */
/*   Updated: 2023/08/10 15:33:56 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
