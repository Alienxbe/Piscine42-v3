/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:20:57 by marykman          #+#    #+#             */
/*   Updated: 2023/08/16 23:43:27 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_int_size(int n)
{
	if (n >= 0 && n < 10)
		return (1);
	if (n < 0 && n > -10)
		return (2);
	return (ft_int_size(n / 10) + 1);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				n_len;
	unsigned int	un;

	n_len = ft_int_size(n);
	str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!str)
		return (NULL);
	str[n_len] = '\0';
	un = n;
	if (n < 0)
		un = -n;
	while (n_len--)
	{
		str[n_len] = (un % 10) + '0';
		un /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
