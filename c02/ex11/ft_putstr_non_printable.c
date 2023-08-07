/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:33:30 by marykman          #+#    #+#             */
/*   Updated: 2023/08/07 15:36:42 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_puthexa(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, base + (c / 16), 1);
	write(1, base + (c % 16), 1);
}

void	ft_putstr_non_printable(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		if (!ft_isprint(*str))
			ft_puthexa(*str);
		else
			write(1, str, 1);
		str++;
	}
}
