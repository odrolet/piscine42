/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:24:40 by oldrolet          #+#    #+#             */
/*   Updated: 2022/11/30 08:39:28 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*int main()
{
	int a;
	int *nbr;

	a = 50;
	nbr = &a;
	printf("%d\n", a);
	ft_ft(nbr);
	printf("%d\n", *nbr);
}*/
