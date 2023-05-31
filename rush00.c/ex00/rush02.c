/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:17:35 by oldrolet          #+#    #+#             */
/*   Updated: 2022/11/27 13:54:33 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_condition2(int i, int j, int x, int y)
{
	if (((i == 1) && (j == 1)) || ((i == x) && (j == 1)))
		ft_putchar('A');
	else if (((i == 1) && (j == y)) || ((j == y) && (i == x)))
		ft_putchar('C');
	else if (((i == 1) && (j < y)) || ((i < x) && (j == 1))
		|| ((i < x) && (j == y)) || ((j < y) && (i == x)))
		ft_putchar('B');
	else
		ft_putchar(' ');
}
