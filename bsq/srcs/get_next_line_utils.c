/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:26:12 by marykman          #+#    #+#             */
/*   Updated: 2023/08/23 16:50:49 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	gnl_free_return(char **str, int ret_value)
{
	if (*str)
		free(*str);
	*str = NULL;
	return (ret_value);
}

int	ft_index(char *s, char c)
{
	int	i;

	if (!s)
		return (-1);
	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
	if (s[i] == c)
		return (i);
	return (-1);
}

void	*ft_memcpy(void *dest, void *src, int n)
{
	if (!dest && !src)
		return (0);
	while (n--)
		*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	return (dest);
}

char	*ft_substr(char *s, int start, int len, int s_free)
{
	char	*p;

	if (len < 0)
		len = ft_strlen(s);
	p = (char *)malloc(sizeof(*p) * (len + 1));
	if (p)
	{
		p[len] = 0;
		ft_memcpy(p, s + start, len);
	}
	if (s_free || !p)
		free(s);
	return (p);
}
