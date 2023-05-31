/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:38:13 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/08 11:27:57 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = nb;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		while (nb > 1)
		{
			temp = temp * (nb - 1);
			nb--;
		}
		return (temp);
	}
}
/*int	main()
{
	int	nb;
	nb = 5;

	printf("%d", ft_iterative_factorial(5));
}*/
