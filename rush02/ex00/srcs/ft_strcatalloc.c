/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcatalloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:04:03 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 22:42:21 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcatalloc(char *s1, char *s2)
{
	char	*str;
	int		tot_len;

	if (!s1 || !s2)
		return (NULL);
	tot_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * tot_len);
	if (!str)
		return (free_ret(s1));
	ft_strlcpy(str, s1, tot_len);
	ft_strlcpy(str + ft_strlen(str), s2, tot_len);
	free(s1);
	return (str);
}

char	*ft_strcatalloc_free(char *s1, char *s2)
{
	char	*str;
	int		tot_len;

	if (!s1 || !s2)
		return (NULL);
	tot_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * tot_len);
	if (!str)
	{
		free(s1);
		return (free_ret(s2));
	}
	ft_strlcpy(str, s1, tot_len);
	ft_strlcpy(str + ft_strlen(str), s2, tot_len);
	free(s1);
	free(s2);
	return (str);
}
