/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:36:26 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 17:23:20 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_bn_len(char *str)
{
	int	i;

	if (str[0] != '1')
		return (0);
	i = 1;
	while (str[i] == '0')
		i++;
	return (i);
}

int	ft_digit_len(char *str)
{
	int	i;

	i = 0;
	while (ft_isnumeric(str[i]))
		i++;
	return (i);
}

int	ft_tablen(char **tab)
{
	int	i;

	if (!tab)
		return (0);
	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_pow(int nb, int power)
{
	if (power <= 0)
		return (1);
	return (nb * ft_pow(nb, power - 1));
}
