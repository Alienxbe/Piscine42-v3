/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:28:46 by marykman          #+#    #+#             */
/*   Updated: 2023/08/22 20:39:09 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	if (!tab || !f)
		return (0);
	count = 0;
	i = -1;
	while (++i < length)
		if (f(tab[i]))
			count++;
	return (count);
}
