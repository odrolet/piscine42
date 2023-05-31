/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:45:40 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/15 17:48:37 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strcpy(char *src, char *dest)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	int i;
	char *tab;

	i = 0;
	tab = malloc(sizeof(*tab) * (ft_strlen(src) + 1));
	while (src[i])
	{
		ft_strcpy(src, tab);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*int main ()
{
	int i;

	i = 0;
	char a[] = "bonjour";

	printf("%s", ft_strdup(a));
}*/
