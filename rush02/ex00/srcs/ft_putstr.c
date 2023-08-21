/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:35:27 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 16:42:57 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putendl(char *str)
{
	ft_putstr(str);
	ft_putstr("\n");
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
