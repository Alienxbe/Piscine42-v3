/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:47:47 by marykman          #+#    #+#             */
/*   Updated: 2023/08/16 23:38:35 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = -1;
	while (src[++i] && i + 1 < size)
		dest[i] = src[i];
	if (i < size)
		dest[i] = '\0';
	return (i);
}

int	ft_contain(char *str, char c)
{
	if (!str)
		return (0);
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	count;

	if (!str || !charset)
		return (0);
	count = 0;
	while (*str)
	{
		while (ft_contain(charset, *str))
			str++;
		if (*str)
			count++;
		while (*str && !ft_contain(charset, *str))
			str++;
	}
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	len;

	if (!str || !charset)
		return (0);
	len = 0;
	while (str[len] && !ft_contain(charset, str[len]))
		len++;
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		wc;
	int		wl;
	int		i;

	if (!str || !charset)
		return (NULL);
	wc = ft_word_count(str, charset);
	tab = malloc(sizeof(char *) * (wc + 1));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < wc)
	{
		while (ft_contain(charset, *str))
			str++;
		wl = ft_word_len(str, charset);
		tab[i] = malloc(sizeof(char) * (wl + 1));
		if (!tab[i])
			return (NULL);
		str += ft_strlcpy(tab[i], str, wl + 1);
	}
	tab[i] = NULL;
	return (tab);
}
