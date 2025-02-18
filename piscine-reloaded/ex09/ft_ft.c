/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:56:30 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 11:00:48 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	nbr;
	int	*ptr;

	nbr = 2;
	printf("%d\n",nbr);
	ptr = &nbr;
	ft_ft(ptr);
	printf("%d\n",nbr);
}
*/
