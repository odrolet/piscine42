/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:51:39 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/13 13:23:49 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	res;

	i = 0;
	res = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				argv[1][i] = argv[1][i] + 32;
				ft_putchar(argv[1][i]);
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				argv[1][i] = argv[1][i] - 32;
				ft_putchar(argv[1][i]);
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
