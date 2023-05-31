/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldrolet <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:26:09 by oldrolet          #+#    #+#             */
/*   Updated: 2022/12/12 15:28:38 by oldrolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb / i)
		i++;
	if (nb == (i * i))
		return (i);
	else
		return (0);
}
/*#define BILLION  1000000000.0
#include <time.h>
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    struct timespec start, end;
    clock_gettime(CLOCK_REALTIME, &start);
    int sq = ft_sqrt(214739716);
    printf("%d\n", sq);
    clock_gettime(CLOCK_REALTIME, &end);
    // time_spent = end - start
    double time_spent = (end.tv_sec - start.tv_sec) +
                        (end.tv_nsec - start.tv_nsec) / BILLION;
    printf("Time elpased is %f seconds", time_spent);
}*/
