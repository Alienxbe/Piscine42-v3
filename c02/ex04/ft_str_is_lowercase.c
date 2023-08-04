/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 23:29:43 by marykman          #+#    #+#             */
/*   Updated: 2023/08/04 23:31:31 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_islower(*str++))
			return (0);
	return (1);
}
