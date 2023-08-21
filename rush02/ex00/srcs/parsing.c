/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:20:47 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 21:11:03 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_nbr	ft_parse_line(char *line)
{
	t_nbr	nbr;
	char	**tab;

	nbr = (t_nbr){0};
	tab = ft_split(line, ":");
	if (!tab)
		return (nbr);
	if (ft_tablen(tab) == 2 && check_number(tab[0]) && check_word(tab[1]))
	{
		nbr.mode = 0;
		nbr.n = ft_atoi(tab[0]);
		if (ft_digit_len(tab[0]) >= 3)
		{
			nbr.mode = 1;
			nbr.n = ft_digit_len(tab[0]) - 1;
		}
		if (nbr.mode == 0 || (nbr.mode == 1 && ft_bn_len(tab[0]) >= 3))
			nbr.word = ft_strdup(check_word(tab[1]));
	}
	ft_free_split(tab);
	return (nbr);
}

t_nbr	*ft_parse_dict(char **lines)
{
	t_nbr	*dict;
	int		size;
	int		line_nbr;
	int		dict_nbr;

	if (!lines)
		return (NULL);
	size = ft_tablen(lines);
	dict = (t_nbr *)malloc(sizeof(t_nbr) * (size + 1));
	if (!dict)
		return (NULL);
	dict_nbr = 0;
	line_nbr = -1;
	while (++line_nbr < size)
	{
		if (lines[line_nbr])
		{
			dict[dict_nbr] = ft_parse_line(lines[line_nbr]);
			if (!dict[dict_nbr++].word)
				return (ft_free_dict(dict));
		}
	}
	dict[dict_nbr].word = NULL;
	return (dict);
}

t_nbr	*ft_parsing(char *filename)
{
	int		size;
	char	*file;
	char	**lines;
	t_nbr	*dict;

	size = ft_size_file(filename);
	file = ft_read_file(filename, size);
	lines = ft_split(file, "\n");
	dict = ft_parse_dict(lines);
	ft_free_split(lines);
	return (dict);
}
