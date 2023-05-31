/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:41:19 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/13 16:53:21 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char *argv[i])
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_str(argv[1], argv[2][j], i) == 0)
				write (1, &argv[1][i], 1);
			i++;
		}
		while (argv[2][j])
		{
			if ((ft_str(argv[1], argv[2][j], i) == 0) && (ft_str(argv[2], argv[2][j], j) == 0))
				write (1, &argv[2][j], i);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
