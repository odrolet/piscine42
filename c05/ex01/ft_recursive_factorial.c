/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:18:44 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/08 11:30:08 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*int main()
{
    int nb;
    nb = 5;

    printf("%d", ft_recursive_factorial(16));
}*/
