/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:05:24 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/14 16:01:04 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof (*tab) *(max - min));
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

/*int	main(void)
{
	int	max;
	int	min;
	int	*range;

	max = 100;
	min = 50;
	printf("%d", ft_ultimate_range(&range, min, max));
	free(range);
}*/
