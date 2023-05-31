/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:49:11 by oldrolet          #+#    #+#             */
/*   Updated: 2022/11/30 08:44:43 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 1;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
}*/
