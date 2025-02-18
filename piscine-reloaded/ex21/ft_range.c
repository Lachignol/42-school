/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:17:57 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 15:34:15 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int main(void)
{
	int min;
	int max;
	int i;
	int *arrayn;
	
	min = 2;
	max = 15;
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
