/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:24:47 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/06 15:03:12 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strlowcase(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] -= 32;
			i++;
		}
		else if (((str[i - 1] <= 47) || (str[i - 1] <= 58
					&& str[i - 1] >= 64) || (str[i - 1] >= 91
					&& str[i - 1] <= 96) || str[i - 1] >= 123)
			&& (str[i] >= 97 && str[i] <= 122))
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
