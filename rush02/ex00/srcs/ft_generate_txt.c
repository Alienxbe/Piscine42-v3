/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_txt.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:30:04 by aderison          #+#    #+#             */
/*   Updated: 2023/08/20 23:04:28 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	not_mod_3(char **str, t_nbr *dict, char **input, int *len)
{
	*str = ft_strcatalloc_free(*str,
			ft_generate_n(dict, ft_atoi_n(*input, *len % 3)));
	if (*len > 3)
	{
		*str = ft_strcatalloc(*str, " ");
		*str = ft_strcatalloc(*str, ft_generate_bn(dict, *input));
	}
	*input += *len % 3;
	*len -= *len % 3;
}

void	mod_3(char **str, t_nbr *dict, char **input, int *len)
{
	*str = ft_strcatalloc_free(*str,
			ft_generate_n(dict, ft_atoi_n(*input, 3)));
	if (*len > 3)
	{
		*str = ft_strcatalloc(*str, " ");
		*str = ft_strcatalloc(*str, ft_generate_bn(dict, *input));
	}
	*input += 3;
	*len -= 3;
}

char	*ft_generate_txt(char *input, t_nbr *dict)
{
	char	*str;
	int		len;

	if (!input || !dict)
		return (NULL);
	len = ft_strlen(input);
	str = ft_strdup("");
	while (len > 0 && str)
	{
		if (len % 3)
			not_mod_3(&str, dict, &input, &len);
		else
			mod_3(&str, dict, &input, &len);
		if (len)
			str = ft_strcatalloc(str, " ");
	}
	return (str);
}
