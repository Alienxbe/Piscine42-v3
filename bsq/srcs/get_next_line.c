/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:57:29 by marykman          #+#    #+#             */
/*   Updated: 2023/08/23 16:47:23 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*gnl_strjoin(char *s1, char *s2)
{
	int		size;
	char	*ptr;

	size = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, ft_strlen(s1));
	ft_memcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2));
	ptr[size] = 0;
	if (s1)
		free(s1);
	return (ptr);
}

int	get_next_line(int fd, char **line)
{
	static char	*saved;
	char		*buff;
	int			bytes;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!line || read(fd, NULL, 0) < 0 || !buff)
		return (gnl_free_return(&buff, -1));
	bytes = 1;
	while (ft_index(saved, '\n') < 0 && bytes != 0)
	{
		bytes = (int)read(fd, buff, BUFFER_SIZE);
		buff[bytes] = 0;
		saved = gnl_strjoin(saved, buff);
		if (!saved)
			return (gnl_free_return(&buff, -1));
	}
	free(buff);
	*line = ft_substr(saved, 0, ft_index(saved, '\n'), 0);
	saved = ft_substr(saved, ft_index(saved, '\n') + 1,
			ft_strlen(saved) - ft_index(saved, '\n'), 1);
	if (!*line || !saved)
		return (gnl_free_return(line, -1));
	if (!bytes)
		return (gnl_free_return(&saved, 0));
	return (1);
}
