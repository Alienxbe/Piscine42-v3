/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_n.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:56:20 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 22:56:33 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_generate_n(t_nbr *dict, int n)
{
	char	*str;

	str = NULL;
	if (n < 20)
		str = ft_generate_0_19(dict, n);
	else if (n < 100)
		str = ft_generate_20_99(dict, n);
	else if (n < 1000)
		str = ft_generate_100_999(dict, n);
	return (str);
}

char	*ft_generate_bn(t_nbr *dict, char *nbr)
{
	t_nbr	*name;
	int		len;

	len = ft_strlen(nbr);
	if (len % 3)
		name = ft_look_up_dict(len - (len % 3), dict, 1);
	else
		name = ft_look_up_dict(len - (3), dict, 1);
	if (!name)
		return (NULL);
	return (name->word);
}
