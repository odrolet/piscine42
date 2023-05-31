/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:46:15 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/14 19:45:38 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<strings.h>
#include<stdlib.h>

int	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_nouv_long(int size, char **strs, char *sep)
{
	int	longeur;
	int	i;

	i = 0;
	longeur = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		longeur = longeur + ft_strlen(strs[i]);
		i++;
	}
	longeur++;
	return (longeur);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		nouv_long;

	nouv_long = ft_nouv_long(size, strs, sep);
	if (size <= 0)
	{
		tab = malloc(1);
		tab[0] = '\0';
		return (tab);
	}
	tab = malloc(sizeof(*tab) * nouv_long);
	ft_strcpy(tab, strs[0]);
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i != (size - 1))
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
int	main()
{
	char *strs[] = {"sup", "aloo", "sup"};
	char sep[] = "-"; 
	
	printf("%s\n", ft_strjoin(6, strs, sep));
}
