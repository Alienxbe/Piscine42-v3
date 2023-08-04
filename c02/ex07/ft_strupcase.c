/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 23:37:08 by marykman          #+#    #+#             */
/*   Updated: 2023/08/04 23:42:57 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	to_upper(char c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	if (!str)
		return (str);
	i = -1;
	while (str[++i])
		str[i] = to_upper(str[i]);
	return (str);
}
