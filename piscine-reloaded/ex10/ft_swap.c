/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:02:19 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 11:11:10 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	nbr1;
	int	nbr2;
	
	nbr1 = 2;
	nbr2 = 4;
	printf("nombre 1 before:%d\n",nbr1);
	printf("nombre 2 before:%d\n",nbr2);
	ft_swap(&nbr1,&nbr2);
	printf("nombre 1 after:%d\n",nbr1);
	printf("nombre 2 after:%d\n",nbr2);
}
*/
