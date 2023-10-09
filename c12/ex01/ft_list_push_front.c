/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:55:32 by marykman          #+#    #+#             */
/*   Updated: 2023/08/24 08:54:09 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (!begin_list)
		return ;
	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		new = ft_create_elem(data);
		if (new)
		{
			new->next = *begin_list;
			*begin_list = new;
		}
	}
}
