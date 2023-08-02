/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:50:50 by marykman          #+#    #+#             */
/*   Updated: 2023/08/02 13:50:54 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	un;

	un = nb;
	if (nb < 0)
	{
		un = -nb;
		ft_putchar('-');
	}
	if (un > 9)
		ft_putnbr(un / 10);
	ft_putchar(un % 10 + '0');
}
