/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:47:41 by marykman          #+#    #+#             */
/*   Updated: 2023/08/21 13:22:03 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char	*filename;
	char	*number;
	char	*text;
	t_nbr	*dict;

	filename = "numbers.dict";
	if (argc == 3)
	{
		filename = argv[1];
		number = argv[2];
	}
	else if (argc == 2)
		number = argv[1];
	else
		return (ft_error("Error", 1));
	dict = ft_parsing(filename);
	if (!dict)
		return (ft_error("Dict Error", 2));
	text = ft_generate_txt(number, dict);
	if (!text)
		return (ft_error("Error", 3));
	ft_putendl(text);
	free(text);
	return (0);
}
