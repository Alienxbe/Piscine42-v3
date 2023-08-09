/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:56:25 by marykman          #+#    #+#             */
/*   Updated: 2023/08/09 22:21:45 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	if (dest_len >= size)
		return (size + ft_strlen(src));
	i = -1;
	while (src[++i] && dest_len + i + 1 < size)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}
