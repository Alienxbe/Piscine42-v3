/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:55:55 by marykman          #+#    #+#             */
/*   Updated: 2023/08/23 23:04:00 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

// Write
# include <unistd.h>
// Malloc / Free
# include <stdlib.h>
// Open
# include <fcntl.h>

# define BUFFER_SIZE	1

typedef enum e_error
{
	SUCCESS,
	MAP_ERROR,
	WRONG_FD_ERROR,
	MALLOC_ERROR
}	t_error;

typedef struct s_chars
{
	char	empty;
	char	obstacle;
	char	full;
}	t_chars;

typedef struct s_sqr
{
	int	size;
	int	x;
	int	y;
}	t_sqr;

typedef struct s_data
{
	char	**tab;
	int		width;
	int		height;
	t_chars	chars;
}	t_data;

// BSQ
void	ft_bsq(char *filename);
t_sqr	solve(t_data data);
t_sqr	find_bsq(t_data data, int x, int y, t_sqr max);
int		sqr_fit(t_data data, t_sqr sqr);

// Parsing
int		ft_parsing(t_data *data, char *filename);
int		ft_parse_map(t_data *data, int fd);
int		ft_parse_info(t_data *data, int fd);
int		check_line(t_data *data, char *line);
int		ft_open(char *filename);

// Write
void	ft_putchar(char c);
void	ft_putstr_fd(char *str, int fd);
t_error	ft_print_error(char *msg, t_error error);
void	ft_print_tab(t_data data);
void	ft_print_sqr(t_data data, t_sqr sqr);

// GNL
int		get_next_line(int fd, char **line);
char	*ft_substr(char *s, int start, int len, int s_free);
void	*ft_memcpy(void *dest, void *src, int n);
int		ft_strlen(char *s);
int		ft_index(char *s, char c);
int		gnl_free_return(char **str, int ret_value);

// Utils
int		ft_strlen(char *str);
int		ft_atoin(char *str, int len);
int		check_identical(t_chars chars);
int		check_empty_line(int fd);
int		ft_free_tab(char **tab, int i, t_error error);

int		ft_isprint(char c);
int		ft_isdigit(char c);
int		ft_str_is_printable(char *str);
int		ft_str_is_digit_n(char *str, int n);

#endif
