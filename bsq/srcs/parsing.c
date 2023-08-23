/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:27:32 by marykman          #+#    #+#             */
/*   Updated: 2023/08/23 19:00:57 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_open(char *filename)
{
	if (!filename)
		return (STDIN_FILENO);
	return (open(filename, O_RDONLY));
}

int	check_line(t_data *data, char *line)
{
	int	i;

	if (!line)
		return (MALLOC_ERROR);
	i = -1;
	while (line[++i])
		if (!(line[i] == data->chars.empty || line[i] == data->chars.obstacle))
			return (MAP_ERROR);
	return (SUCCESS);
}

int	ft_parse_info(t_data *data, int fd)
{
	char	*line;
	int		ret;
	int		len;

	ret = get_next_line(fd, &line);
	if (ret <= 0)
		return (gnl_free_return(&line, MAP_ERROR));
	len = ft_strlen(line);
	data->height = ft_atoin(line, len - 3);
	if (len < 4 || data->height <= 0 || !ft_str_is_printable(&line[len - 3])
		|| !ft_str_is_digit_n(line, len - 3))
		return (gnl_free_return(&line, MAP_ERROR));
	data->chars.empty = line[len - 3];
	data->chars.obstacle = line[len - 2];
	data->chars.full = line[len - 1];
	free(line);
	return (check_identical(data->chars));
}

int	ft_parse_map(t_data *data, int fd)
{
	char	*line;
	int		ret;
	int		i;
	t_error	error;

	i = 0;
	ret = 1;
	while (ret > 0 && i < data->height)
	{
		ret = get_next_line(fd, &line);
		error = check_line(data, line);
		if (error == MAP_ERROR)
			return (ft_free_tab(data->tab, i, error));
		if (error == MALLOC_ERROR)
			return (ft_free_tab(data->tab, i - 1, error));
		if (!i)
			data->width = ft_strlen(line);
		else if (ft_strlen(line) != data->width)
			return (ft_free_tab(data->tab, i, MAP_ERROR));
		data->tab[i++] = line;
	}
	if ((fd > 0 && !ret) || i != data->height || check_empty_line(fd))
		return (ft_free_tab(data->tab, i - 1, MAP_ERROR));
	return (SUCCESS);
}

int	ft_parsing(t_data *data, char *filename)
{
	int		fd;
	t_error	error;

	fd = ft_open(filename);
	if (fd < 0)
		return (WRONG_FD_ERROR);
	error = ft_parse_info(data, fd);
	if (error == SUCCESS)
	{
		data->tab = (char **)malloc(sizeof(char *) * (data->height));
		if (data->tab)
			error = ft_parse_map(data, fd);
		else
			error = MALLOC_ERROR;
	}
	close(fd);
	return (error);
}
