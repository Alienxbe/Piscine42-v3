/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:57:25 by marykman          #+#    #+#             */
/*   Updated: 2023/08/10 16:18:11 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f'
		|| c == ' ');
}

int	ft_index(char *str, char c)
{
	int	i;

	if (!str)
		return (-1);
	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}

int	check_base(char *base)
{
	int	base_len;

	if (!base)
		return (0);
	base_len = -1;
	while (base[++base_len])
		if (base[base_len] == '+' || base[base_len] == '-'
			|| ft_isspace(base[base_len])
			|| ft_index(base + base_len + 1, base[base_len]) >= 0)
			return (0);
	return (base_len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	sign;
	int	base_len;

	base_len = check_base(base);
	if (base_len <= 1)
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
