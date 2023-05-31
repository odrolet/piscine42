/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:06:41 by oldrolet          #+#    #+#             */
/*   Updated: 2022/11/30 08:43:24 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}

/*int main()
{
	int a;
	int	b;

	a = 1;
	b = 2;

	int	*pa = &a;
	int *pb = &b;
	ft_swap(pa, pb)
}*/
