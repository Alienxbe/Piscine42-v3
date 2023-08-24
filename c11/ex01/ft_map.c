/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:52:30 by marykman          #+#    #+#             */
/*   Updated: 2023/08/24 02:38:38 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	if (!tab || !f)
		return (NULL);
	ret = (int *)malloc(sizeof(int) * length);
	if (!ret)
		return (NULL);
	i = -1;
	while (++i < length)
		ret[i] = f(tab[i]);
	return (ret);
}
