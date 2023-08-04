/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 23:03:46 by marykman          #+#    #+#             */
/*   Updated: 2023/08/04 23:28:46 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnumeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isnumeric(*str++))
			return (0);
	return (1);
}
