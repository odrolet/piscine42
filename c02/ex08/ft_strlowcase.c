/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:06:22 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/05 18:24:09 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
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
	char	a[] = "ASDGGgsadf12368ASD";
		
	printf("%s\n", a);
	printf("%s\n", ft_strlowcase(a));

}*/
