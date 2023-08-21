/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_up_dict.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:31:10 by aderison          #+#    #+#             */
/*   Updated: 2023/08/20 23:04:37 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_nbr	*ft_look_up_dict(int nb, t_nbr *tab, int mode)
{
	int	i;

	if (!tab)
		return (NULL);
	i = -1;
	while (tab[++i].word)
	{
		if (nb == tab[i].n && !mode && !tab[i].mode)
			return (tab + i);
		else if (tab[i].mode && mode && nb == tab[i].n)
			return (tab + i);
	}
	return (NULL);
}
