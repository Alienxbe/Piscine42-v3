/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:50:48 by marykman          #+#    #+#             */
/*   Updated: 2023/08/05 15:06:28 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_address(void *addr)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 16;
	while (--i >= 0)
		ft_putchar(base[((unsigned long)addr >> (4 * i)) & 0xf]);
}

void	print_char_hex(unsigned char *addr, int size)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = -1;
	while (++i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if (i < size)
		{
			ft_putchar(base[addr[i] / 0x10]);
			ft_putchar(base[addr[i] % 0x10]);
		}
		else
			write(1, "  ", 2);
	}
}

void	print_char(unsigned char *addr, int size)
{
	int	i;

	if (size > 16)
		size = 16;
	i = -1;
	while (++i < size)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		print_address(addr + i);
		ft_putchar(':');
		print_char_hex((unsigned char *)addr + i, size - i);
		ft_putchar(' ');
		print_char((unsigned char *)addr + i, size - i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
