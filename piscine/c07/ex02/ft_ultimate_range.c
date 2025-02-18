/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:46:55 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/08 16:36:25 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (-1);
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	
	int	i;	
	int	min;
	int	max;
	int	*range;


	i = 0;
	min = 2;
	max = 15;
	range = NULL;
	printf("%d",ft_ultimate_range(&range,min,max));
	while(i < 13)
	{	
		printf("%d", range[i]);
		i++;
	}	
	free(range);
}
*/
