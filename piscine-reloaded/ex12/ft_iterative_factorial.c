/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:27:02 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 16:00:29 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = nb;
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

	nb = 8;
	printf("%d",ft_iterative_factorial(8));
}
*/
