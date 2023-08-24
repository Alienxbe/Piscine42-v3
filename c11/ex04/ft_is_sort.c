/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:40:10 by marykman          #+#    #+#             */
/*   Updated: 2023/08/24 14:43:55 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	direction;

	if (length <= 1)
		return (1);
	if (!tab || !f)
		return (1);
	i = 0;
	while (i < length - 1 && !f(tab[i], tab[i + 1]))
		i++;
	direction = f(tab[i], tab[i + 1]);
	while (i < length - 1)
	{
		if ((direction > 0 && f(tab[i], tab[i + 1]) < 0)
			|| (direction < 0 && f(tab[i], tab[i + 1]) > 0))
			return (0);
		i++;
	}
	return (1);
}
