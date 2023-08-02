/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:50:30 by marykman          #+#    #+#             */
/*   Updated: 2023/08/02 13:50:32 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (++i < 8)
	{
		j = i;
		while (++j < 9)
		{
			k = j;
			while (++k < 10)
			{
				ft_putchar('0' + i);
				ft_putchar('0' + j);
				ft_putchar('0' + k);
				if (!(i == 7 && j == 8 && k == 9))
					write(1, ", ", 2);
			}
		}
	}
}
