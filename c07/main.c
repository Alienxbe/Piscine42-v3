/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:39:28 by marykman          #+#    #+#             */
/*   Updated: 2023/08/17 18:19:56 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	**ft_split(char *str, char *charset);

char	*ft_itoa(int n);

int	ft_word_count(char *str, char *charset);

int	main(void)
{
	char	*str = ft_convert_base("--01234 ", "0123456789", "01");

	printf("%s\n", str);
	free(str);
	return (0);
}
