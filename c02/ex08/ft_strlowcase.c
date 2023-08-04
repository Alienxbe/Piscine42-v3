/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 23:43:18 by marykman          #+#    #+#             */
/*   Updated: 2023/08/04 23:44:09 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	to_lower(char c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	if (!str)
		return (str);
	i = -1;
	while (str[++i])
		str[i] = to_lower(str[i]);
	return (str);
}
