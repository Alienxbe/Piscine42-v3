/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:49:39 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 23:18:28 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

// Write
# include <unistd.h>
// Malloc / Free
# include <stdlib.h>
// Open / Read / Close
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# define BUFFER_SIZE 1024

typedef struct s_nbr
{
	int			n;
	char		*word;
	int			mode;
}				t_nbr;

t_nbr			*ft_parsing(char *filename);
int				ft_size_file(char *filename);
char			**ft_split(char *str, char *charset);

// Parsing
t_nbr			*ft_parse_dict(char **file);
t_nbr			ft_parse_line(char *line);

// GEN
char			*ft_generate_0_19(t_nbr *dict, int n);
char			*ft_generate_20_99(t_nbr *dict, int n);
char			*ft_generate_100_999(t_nbr *dict, int n);
char			*ft_generate_n(t_nbr *dict, int n);
char			*ft_generate_bn(t_nbr *dict, char *nbr);

// File reading
char			*ft_read_file(char *filename, int size);

// Utils
int				ft_atoi(char *str);
int				ft_atoi_n(char *str, int len);
int				ft_tablen(char **tab);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				check_number(char *str);
char			*check_word(char *str);
int				ft_digit_len(char *str);
char			*ft_strdup(char *src);
int				ft_pow(int nb, int power);
int				ft_strlen(char *str);
int				ft_bn_len(char *str);
char			*ft_generate_txt(char *input, t_nbr *dict);
char			*ft_strjoin(int size, char **strs, char *sep);
char			*ft_strcatalloc(char *s1, char *s2);
char			*ft_strcatalloc_free(char *s1, char *s2);

int				ft_str_is_printable(char *str);
int				ft_isnumeric(char c);
int				ft_isprint(char c);

// Print
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putendl(char *str);
void			ft_putnbr(int n);
void			ft_print_nbr(t_nbr nbr);
void			ft_print_dict(t_nbr *dict);

// Free
void			*free_ret(void *ptr);
void			*ft_free_split(char **tab);
void			*ft_free_dict(t_nbr *dict);

// Look up
t_nbr			*ft_look_up_dict(int nb, t_nbr *tab, int mode);
int				ft_str_is_digit(char *str);

// Error
int				ft_error(char *msg, int val);

#endif
