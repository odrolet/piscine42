/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:19:29 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/15 18:42:55 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_notdouble(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (ft_notdouble(argv[1], argv[1][i], i) == 0)
			{
				j = 0;
				while(argv[2][j])
				{
					if(argv[2][j] == argv[1][i])
					{
						write(1, &argv[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
