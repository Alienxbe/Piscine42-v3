/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:17:32 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 23:18:00 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_str_is_digit(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isnumeric(*str++))
			return (0);
	return (1);
}
