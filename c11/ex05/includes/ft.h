/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:05:20 by marykman          #+#    #+#             */
/*   Updated: 2023/08/24 02:37:58 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define OPERATIONS	"+-/*%"

typedef enum e_error
{
	SUCCESS,
	WRONG_OP_ERROR,
	ZERO_DIVISION_ERROR,
	ZERO_MODULO_ERROR,
	NULL_PTR_ERROR
}	t_error;

typedef t_error	(*t_op)(int, int, int *);

// Operations
t_error	ft_add(int a, int b, int *res);
t_error	ft_sub(int a, int b, int *res);
t_error	ft_div(int a, int b, int *res);
t_error	ft_mult(int a, int b, int *res);
t_error	ft_mod(int a, int b, int *res);

// Prints
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

// Utils
int		ft_index(char *str, char c);
int		ft_strlen(char *str);
int		ft_atoi(char *str);

#endif
