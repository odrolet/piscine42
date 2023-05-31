/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:14:32 by oldrolet          #+#    #+#             */
/*   Updated: 2022/11/27 11:11:50 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c);

void	ft_condition(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == x && j == 1)
		|| (i == 1 && j == y) || (x == i && j == y))
		ft_putchar('o');
	else if ((i < x && j == 1) || (i < x && j == y))
		ft_putchar('-');
	else if ((j < y && i == 1) || (j < y && i == x))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush00(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			ft_condition (i, j, x, y);
			if (i == x)
				ft_putchar ('\n');
			i++;
		}
	j++;
	}
}
