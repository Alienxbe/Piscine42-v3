/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:00:42 by marykman          #+#    #+#             */
/*   Updated: 2023/08/24 14:38:49 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_error	ft_operations(int a, int b, int op, int *res)
{
	t_op	fct[5];

	fct[0] = &ft_add;
	fct[1] = &ft_sub;
	fct[2] = &ft_div;
	fct[3] = &ft_mult;
	fct[4] = &ft_mod;
	if (op < 0)
		return (WRONG_OP_ERROR);
	return (fct[op](a, b, res));
}

int	main(int argc, char **argv)
{
	t_error	error;
	int		res;
	int		a;
	int		b;

	if (argc != 4)
		return (1);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	error = ft_operations(a, b, ft_index(OPERATIONS, argv[2][0]), &res);
	if (error == WRONG_OP_ERROR)
		ft_putstr("0");
	else if (error == ZERO_DIVISION_ERROR)
		ft_putstr("Stop : division by zero");
	else if (error == ZERO_MODULO_ERROR)
		ft_putstr("Stop : modulo by zero");
	else if (error == SUCCESS)
		ft_putnbr(res);
	ft_putstr("\n");
	return (0);
}
