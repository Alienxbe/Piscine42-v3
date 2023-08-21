/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:37:15 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 15:10:15 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen_char(char *str, char c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen_char(src, ' ') + 1));
	ft_strlcpy(str, src, ft_strlen_char(src, ' ') + 1);
	return (str);
}
