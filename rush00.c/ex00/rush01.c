/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:23:36 by oldrolet          #+#    #+#             */
/*   Updated: 2022/11/27 13:57:42 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_condition1(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == x && j == y))
		ft_putchar('/');
	else if ((i == x && j == 1) || (j == y && i == 1))
		ft_putchar('\\');
	else if ((i < x && j == 1) || (i == 1 && j < y)
		|| (i == x && j < y) || (i < x && j == y))
		ft_putchar('*');
	else
		ft_putchar(' ');
}
