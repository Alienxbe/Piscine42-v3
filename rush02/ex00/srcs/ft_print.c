/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:51:04 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 16:51:59 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_nbr(t_nbr nbr)
{
	ft_putstr("nbr->n: ");
	ft_putnbr(nbr.n);
	ft_putstr("\nnbr->word: `");
	ft_putstr(nbr.word);
	ft_putstr("`\nnbr->mode: ");
	ft_putnbr(nbr.mode);
	ft_putendl("\n====================");
}

void	ft_print_dict(t_nbr *dict)
{
	if (!dict)
		return ;
	while (dict->word)
		ft_print_nbr(*dict++);
}
