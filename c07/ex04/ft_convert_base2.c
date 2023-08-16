/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:31:52 by marykman          #+#    #+#             */
/*   Updated: 2023/08/16 23:44:05 by marykman         ###   ########.fr       */
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

int	ft_int_size_base(int n, int base_len)
{
	if (n >= 0 && n < base_len)
		return (1);
	if (n < 0 && n > -base_len)
		return (2);
	return (ft_int_size_base(n / base_len, base_len) + 1);
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
