/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:32:59 by marykman          #+#    #+#             */
/*   Updated: 2023/08/02 13:47:52 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbrs(int *nbrs, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		ft_putchar(nbrs[i] + '0');
	if (nbrs[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	nbrs[9];
	int	index;
	int	nbr;

	index = 0;
	nbr = -1;
	while (index >= 0)
	{
		nbrs[index] = ++nbr;
		if (nbr > 9)
			nbr = nbrs[--index];
		else if (index < n - 1)
			index++;
		else
			ft_print_nbrs(nbrs, n);
	}
}
