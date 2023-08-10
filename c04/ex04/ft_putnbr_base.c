/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:44:00 by marykman          #+#    #+#             */
/*   Updated: 2023/08/10 15:54:49 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	base_len;
	int	i;

	if (!base)
		return (0);
	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return (0);
		i = 1;
		while (base[base_len + i])
			if (base[base_len + i++] == base[base_len])
				return (0);
		base_len++;
	}
	return (base_len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	un;
	unsigned int	base_len;

	base_len = (unsigned int)check_base(base);
	if (base_len <= 1)
		return ;
	un = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		un = -nbr;
	}
	if (un >= base_len)
		ft_putnbr_base(un / base_len, base);
	write(1, base + (un % base_len), 1);
}
