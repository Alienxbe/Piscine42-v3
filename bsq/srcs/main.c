/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:52:49 by marykman          #+#    #+#             */
/*   Updated: 2023/08/23 19:01:44 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_bsq(char *filename)
{
	t_data	data;
	t_sqr	bsq;
	t_error	error;

	error = ft_parsing(&data, filename);
	if (error != SUCCESS)
		ft_print_error("map error\n", error);
	else
	{
		bsq = solve(data);
		ft_print_sqr(data, bsq);
		ft_print_tab(data);
		ft_free_tab(data.tab, data.height - 1, SUCCESS);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		ft_bsq(NULL);
	else if (argc > 1)
		while (++i < argc)
			ft_bsq(argv[i]);
	else
		return (1);
	system("leaks bsq");
	return (0);
}
