/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:32:04 by oldrolet          #+#    #+#             */
/*   Updated: 2022/11/27 13:58:02 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_condition3(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
		ft_putchar('A');
	else if (i == x && j == 1)
		ft_putchar('C');
	else if (i == 1 && j == y)
		ft_putchar('A');
	else if (i == x && j == y)
		ft_putchar('C');
	else if ((i < x && j == 1) || (i == 1 && j < y)
		|| (i == x && j < y) || (j == y && i < x))
		ft_putchar('B');
	else
		ft_putchar(' ');
}
