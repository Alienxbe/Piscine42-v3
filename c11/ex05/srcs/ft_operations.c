/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:06:44 by marykman          #+#    #+#             */
/*   Updated: 2023/08/24 02:38:53 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_error	ft_add(int a, int b, int *res)
{
	if (!res)
		return (NULL_PTR_ERROR);
	*res = a + b;
	return (SUCCESS);
}

t_error	ft_sub(int a, int b, int *res)
{
	if (!res)
		return (NULL_PTR_ERROR);
	*res = a - b;
	return (SUCCESS);
}

t_error	ft_div(int a, int b, int *res)
{
	if (!res)
		return (NULL_PTR_ERROR);
	if (!b)
		return (ZERO_DIVISION_ERROR);
	*res = a / b;
	return (SUCCESS);
}

t_error	ft_mult(int a, int b, int *res)
{
	if (!res)
		return (NULL_PTR_ERROR);
	*res = a * b;
	return (SUCCESS);
}

t_error	ft_mod(int a, int b, int *res)
{
	if (!res)
		return (NULL_PTR_ERROR);
	if (!b)
		return (ZERO_MODULO_ERROR);
	*res = a % b;
	return (SUCCESS);
}
