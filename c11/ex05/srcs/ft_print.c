/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:41:39 by marykman          #+#    #+#             */
/*   Updated: 2023/08/24 01:59:15 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
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
	if (un >= 10)
		ft_putnbr(un / 10);
	ft_putchar(un % 10 + '0');
}
