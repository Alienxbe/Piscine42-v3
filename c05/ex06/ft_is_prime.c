/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:51:50 by marykman          #+#    #+#             */
/*   Updated: 2023/08/14 17:45:22 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)	
{
	unsigned int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= (unsigned int)nb)
		if (nb % i++ == 0)
			return (0);
	return (1);
}
