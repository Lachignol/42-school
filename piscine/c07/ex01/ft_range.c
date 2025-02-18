/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:14:12 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/09 12:00:53 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (0);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int	main(void)
{

	int	min;
	int	max;
	int	i;
	int	*arrayn;

	min = 15;
	max = 2;
	i = 0;
	arrayn = ft_range(min,max);
	while (arrayn[i])
	{
		printf("%d" , arrayn[i]);
		i++;
	}

	free(arrayn);
}
*/
