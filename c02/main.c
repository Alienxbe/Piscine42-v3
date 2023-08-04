/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:36:36 by marykman          #+#    #+#             */
/*   Updated: 2023/08/05 00:41:21 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	print_chars(char *str, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		printf("%c | ", str[i]);
}

int	main(void)
{
	char			*src = "Hello";
	char			dst1[22] = "01234567890123456789aa";
	char			dst2[22] = "01234567890123456789aa";
	unsigned int	n = 7;

	printf("Yours(%d): `%s`\n", ft_strlcpy(dst1, src, n), dst1);
	print_chars(dst1, n + 10);
	printf("\nOrigi(%lu): `%s`\n", strlcpy(dst2, src, n), dst2);
	print_chars(dst2, n + 10);
	return (0);
}
