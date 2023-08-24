/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:32:32 by marykman          #+#    #+#             */
/*   Updated: 2023/08/24 02:39:15 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*swp;
	int		i;

	if (!tab || !cmp)
		return ;
	i = 0;
	while (tab[i] && tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			swp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swp;
			i = -1;
		}
		i++;
	}
}
