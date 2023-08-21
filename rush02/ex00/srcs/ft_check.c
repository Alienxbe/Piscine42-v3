/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:00:14 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 14:24:27 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_number(char *str)
{
	int	i;

	i = ft_digit_len(str);
	if (i == 0)
		return (0);
	while (str[i] == ' ')
		i++;
	if (str[i] != '\0')
		return (0);
	return (1);
}

char	*check_word(char *str)
{
	int		i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (!ft_str_is_printable(str + i))
		return (NULL);
	return (str + i);
}
