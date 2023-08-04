/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 23:31:52 by marykman          #+#    #+#             */
/*   Updated: 2023/08/04 23:47:33 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_isupper(*str++))
			return (0);
	return (1);
}
