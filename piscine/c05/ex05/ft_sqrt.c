/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:34:29 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/03 18:08:20 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;
	int	o;

	i = 0;
	o = 1;
	if (nb < 0)
		return (0);
	while (nb >= 0)
	{
		if (0 == nb)
			return (i);
		nb = nb - o;
		o += 2;
		i++;
	}
	return (0);
}
/*
int	main(void)
{

	int	nb;

	nb = 9;
	printf("%d",ft_sqrt(nb));
}
*/
