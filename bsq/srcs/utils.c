/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:09:03 by marykman          #+#    #+#             */
/*   Updated: 2023/08/23 21:44:11 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_free_tab(char **tab, int i, t_error error)
{
	if (!tab)
		return (error);
	while (i >= 0)
	{
		if (tab[i])
			free(tab[i]);
		i--;
	}
	free(tab);
	return (error);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoin(char *str, int len)
{
	int	n;
	int	i;

	if (!str)
		return (0);
	n = 0;
	i = 0;
	while (ft_isdigit(str[i]) && i < len)
		n = n * 10 + (str[i++] - '0');
	return (n);
}

int	check_identical(t_chars chars)
{
	if (chars.empty == chars.obstacle || chars.obstacle == chars.full
		|| chars.full == chars.empty)
		return (MAP_ERROR);
	return (SUCCESS);
}

int	check_empty_line(int fd)
{
	char	*line;
	int		ret;
	int		error;

	if (fd == STDIN_FILENO)
		return (SUCCESS);
	ret = get_next_line(fd, &line);
	if (ret < 0)
		return (MALLOC_ERROR);
	if (*line)
		error = MAP_ERROR;
	else
		error = SUCCESS;
	free(line);
	return (error);
}
