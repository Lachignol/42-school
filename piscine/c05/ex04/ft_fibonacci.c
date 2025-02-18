/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:01:03 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/01 12:32:50 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return ((ft_fibonacci(index - 2)) + (ft_fibonacci(index - 1)));
}
/*
int	main(void)
{
	int	idx;

	idx = 5;
	printf("%d", ft_fibonacci(idx));
}
*/
