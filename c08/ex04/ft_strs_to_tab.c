/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:58:52 by marykman          #+#    #+#             */
/*   Updated: 2023/08/17 23:28:00 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;

	if (!src)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	return (ft_strcpy(str, src));
}

void	*ft_freeall(t_stock_str *tab)
{
	int	i;

	i = 0;
	while (tab[i].copy)
		free(tab[i++].copy);
	free(tab);
	return (NULL);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	if (!av)
		return (NULL);
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
			return (ft_freeall(tab));
	}
	tab[i].str = NULL;
	return (tab);
}
