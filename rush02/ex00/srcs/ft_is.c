/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:02:39 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 14:20:54 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_isnumeric(char c)
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
