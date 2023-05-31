/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:15:29 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/05 15:13:32 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main()
{
	int x;
	int y;
	int c;
	int d;

	x = 10;
	y = 5;
	ft_ultimate_div_mod(&x, &y);
	c = x +'0';
	d = y +'0';

	write (1, &c, 1);
	write (1, "\n", 1);
	write (1, &d, 1);
	write (1, "\n", 1);
	printf("%d\n", x);
	printf("%d", y);
}*/
