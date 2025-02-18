/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:07:40 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/19 18:38:09 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int	main(void)
{	
	int	a;
	int    *pointeur;

	a = '2';
	pointeur = &a;

	ft_ft(pointeur);

	printf("%d",a);


}
*/
