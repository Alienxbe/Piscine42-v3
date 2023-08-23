/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:00:41 by marykman          #+#    #+#             */
/*   Updated: 2023/08/23 16:46:14 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_printable(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isprint(*str++))
			return (0);
	return (1);
}

int	ft_str_is_digit_n(char *str, int n)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && i < n)
		if (!ft_isdigit(str[i++]))
			return (0);
	return (1);
}
