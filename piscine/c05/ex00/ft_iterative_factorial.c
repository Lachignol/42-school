/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:48:29 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/01 11:46:41 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;
	int	j;

	i = nb;
	j = 0;
	result = 1;
	if (i < 0)
		return (0);
	while (i >= 1)
	{
		result *= i;
		i--;
	}
	return (result);
}
/*
int	main(void)
{
	int	nb;

	nb = 6;
	printf("resultat : %d",ft_iterative_factorial(nb)); 	
}
*/
