/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:43:36 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 23:04:00 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*free_ret(void *ptr)
{
	if (ptr)
		free(ptr);
	return (NULL);
}

void	*ft_free_split(char **tab)
{
	int	i;

	if (!tab)
		return (NULL);
	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

void	*ft_free_dict(t_nbr *dict)
{
	int	i;

	if (!dict)
		return (NULL);
	i = 0;
	while (dict[i].word)
		free(dict[i++].word);
	free(dict);
	return (NULL);
}
