/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:48:06 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/08 11:31:02 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			temp = (temp * nb);
			power--;
		}
		return (temp);
	}
}
/*int	main()
{
	int	nb;
	int	power;

	printf("%d", ft_iterative_power(5, 5));
}*/
