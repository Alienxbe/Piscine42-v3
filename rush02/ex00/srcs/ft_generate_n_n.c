/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_n_n.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:55:29 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 22:56:01 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_generate_0_19(t_nbr *dict, int n)
{
	t_nbr	*addr;

	addr = ft_look_up_dict(n, dict, 0);
	if (!addr)
		return (NULL);
	return (ft_strdup(addr->word));
}

char	*ft_generate_20_99(t_nbr *dict, int n)
{
	char	*str;
	t_nbr	*dozen;
	t_nbr	*unit;

	if (n < 20)
		str = ft_generate_0_19(dict, n);
	else
	{
		dozen = ft_look_up_dict((n / 10) * 10, dict, 0);
		unit = ft_look_up_dict(n % 10, dict, 0);
		if (!dozen || !unit)
			return (NULL);
		str = ft_strdup(dozen->word);
		str = ft_strcatalloc(str, " ");
		str = ft_strcatalloc(str, unit->word);
	}
	return (str);
}

char	*ft_generate_100_999(t_nbr *dict, int n)
{
	char	*str;
	char	*smaller;
	t_nbr	*hundred;
	t_nbr	*name;

	hundred = ft_look_up_dict((n / 100), dict, 0);
	name = ft_look_up_dict(2, dict, 1);
	if (!hundred || !name)
		return (NULL);
	str = ft_strdup(hundred->word);
	str = ft_strcatalloc(str, " ");
	str = ft_strcatalloc(str, name->word);
	str = ft_strcatalloc(str, " ");
	smaller = ft_generate_20_99(dict, n % 100);
	str = ft_strcatalloc_free(str, smaller);
	return (str);
}
