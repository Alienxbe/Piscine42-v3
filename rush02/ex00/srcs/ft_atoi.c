/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:43:41 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 23:03:48 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Modified version of atoi
*/

int	ft_atoi(char *str)
{
	int	n;

	if (!str)
		return (0);
	n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + (*str++ - '0');
	return (n);
}

int	ft_atoi_n(char *str, int len)
{
	int	n;

	if (!str)
		return (0);
	n = 0;
	while (*str >= '0' && *str <= '9' && len--)
		n = n * 10 + (*str++ - '0');
	return (n);
}
