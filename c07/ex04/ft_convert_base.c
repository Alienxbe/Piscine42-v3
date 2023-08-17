/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:21:53 by marykman          #+#    #+#             */
/*   Updated: 2023/08/17 19:55:30 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(char c);
int	ft_index(char *str, char c);
int	ft_int_size_base(int n, int base_len);
int	check_base(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	sign;
	int	base_len;

	base_len = check_base(base);
	if (base_len <= 1 || !str)
		return (0);
	while (ft_isspace(*str))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -sign;
	n = 0;
	while (ft_index(base, *str) >= 0)
		n = n * base_len + ft_index(base, *str++);
	return (n * sign);
}

char	*ft_itoa_base(int n, char *base)
{
	char			*s;
	int				b_len;
	int				n_len;
	unsigned int	un;

	b_len = check_base(base);
	if (b_len <= 1)
		return (NULL);
	n_len = ft_int_size_base(n, b_len);
	s = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!s)
		return (NULL);
	s[n_len] = '\0';
	un = n;
	if (n < 0)
		un = -n;
	while (n_len--)
	{
		s[n_len] = base[un % b_len];
		un /= b_len;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;

	if (!nbr || check_base(base_from) <= 1 || check_base(base_to) <= 1)
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(n, base_to));
}
