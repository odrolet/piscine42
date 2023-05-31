/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:29:56 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/06 15:29:02 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;

	srclen = ft_strlen(src);
	if (srclen < (size - 1))
	{
		ft_strncpy(dest, src, size - 1);
	}
	else if (size != 0)
	{
		ft_strncpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	dest[size - 1] = '\0';
	return (srclen);
}	
/*
int main()
{
	char	a[50] = "un skidoo";
	char	b[50] = "tu peux tu laisser ca dans cours";
	int 	size;

	size = 50;
	printf("%s\n", b);
	printf("%u\n", ft_strlcpy(b, a, 50));
}*/
