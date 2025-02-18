/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:29:57 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/20 11:20:57 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	mod;

	division = *a / *b;
	mod = *a % *b;
	*a = division;
	*b = mod;
}
/*
int	main(void)
{
	int	number1;
	int 	number2;
	int	*pointeur_a;
	int 	*pointeur_b;

	number1 = 10;
	number2 = 4;
	pointeur_a = &number1;
	pointeur_b = &number2;
 	printf("number 1 avant :%d \n" , number1);
	printf("number 2 avant :%d \n" , number2);

	ft_ultimate_div_mod(pointeur_a, pointeur_b);
	printf("number 1 apres donc resultat division :%d \n" , number1);
	printf("number 2 apres donc reste de la division :%d \n" , number2);

}
*/
