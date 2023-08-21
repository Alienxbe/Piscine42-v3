/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:00:16 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 16:38:23 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_size_file(char *filename)
{
	char	buff[BUFFER_SIZE + 1];
	int		fd;
	int		ret;
	int		count;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	count = 0;
	ret = 1;
	while (ret)
	{
		ret = read(fd, buff, BUFFER_SIZE);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	if (close(fd) < 0)
		return (-1);
	return (count);
}

char	*ft_read_file(char *filename, int size)
{
	char	*file;
	int		fd;

	if (size < 0)
		return (NULL);
	file = (char *)malloc(sizeof(char) * (size + 1));
	if (!file)
		return (NULL);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (free_ret(file));
	if (read(fd, file, size) < 0)
		return (free_ret(file));
	if (close(fd) < 0)
		return (free_ret(file));
	file[size] = '\0';
	return (file);
}
