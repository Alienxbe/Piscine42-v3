/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:33:30 by marykman          #+#    #+#             */
/*   Updated: 2023/08/05 12:49:00 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_puthexa(char c)
{
	char	*base;

	base = "0123456789abcdef\\";
	write(1, base + 16, 1);
	write(1, base + (c / 16), 1);
	write(1, base + (c % 16), 1);
}

void	ft_putstr_non_printable(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		if (ft_isprint(*str))
			write(1, str, 1);
		else
			ft_puthexa(*str);
		str++;
	}
}
