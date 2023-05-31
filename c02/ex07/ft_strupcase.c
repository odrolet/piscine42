/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:29:34 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/06 14:23:40 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
/*
int main()
{
	char	a[] = "asjjallA12asd";

	printf("%s\n", a);
	printf("%s\n", ft_strupcase(a));
}*/
