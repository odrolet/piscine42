/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:47:17 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/05 18:12:48 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] != 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char	a[] = "adfdsi0fasD";

	printf("%d", ft_str_is_printable(a));
	printf("%s", a);
}*/
