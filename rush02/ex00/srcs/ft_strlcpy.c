/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:31:25 by marykman          #+#    #+#             */
/*   Updated: 2023/08/20 15:09:48 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (!dest || !src)
		return (0);
	i = -1;
	while (src[++i] && i + 1 < size)
		dest[i] = src[i];
	if (i < size)
		dest[i] = '\0';
	return (i);
}
