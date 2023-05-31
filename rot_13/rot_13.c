/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:55:01 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/15 17:42:20 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	ft_rot(char c)
{
	if (c >= 'A' && c <= 'M' || c >= 'a' && c <= 'm')
	{
		c = c + 13;
	}
	else if (c >= 'N' && c <= 'Z' || c >= 'n' && c <= 'z')
	{
		c = c - 13;
	}
	return (c);
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			ft_putchar(ft_rot(argv[1][i]));
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
