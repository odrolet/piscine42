/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:30:35 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/14 16:00:58 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	max = 10;
	min = 5;
	i = 0;
	tab = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
