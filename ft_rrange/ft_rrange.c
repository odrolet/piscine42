/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:46:54 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/13 15:17:55 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int *ft_rrange(int start, int end)
{
	int *tab;
	int i;

	i = 0;
	tab = (int *)malloc(sizeof(*tab) * (end - start));
	if (start >= end)
		return (NULL);
	if (tab == NULL)
		return (NULL);
	while (start <= end)
	{
		tab[i] = min;
		i++;
		min++
	}
    return (tab);
}
