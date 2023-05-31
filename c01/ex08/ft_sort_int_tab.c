/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:36:46 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/04 12:57:16 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	temp;
	int	swap;

	swap = 0;
	i = 0;
	while (i <= size - 2)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			swap++;
		}
		else
			i++;
	}
	if (swap > 0)
		ft_sort_int_tab(tab, size);
}

/*int main(void)
{
	int	tab[5];
	int size;

	tab[0] = -1;
	tab[1] = 25;
	tab[2] = 9;
	tab[3] = 7;
	tab[4] = 2;
	size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
