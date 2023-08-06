/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:20:11 by marykman          #+#    #+#             */
/*   Updated: 2023/08/05 15:27:27 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*str1 = "Hell";
	char	*str2 = "Hella";

	printf("Yours: %d\n", ft_strcmp(str1, str2));
	printf("Origi: %d\n", strcmp(str1, str2));
	return (0);
}
