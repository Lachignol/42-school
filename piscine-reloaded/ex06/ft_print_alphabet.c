/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:50:02 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 15:47:43 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

void	ft_putchar(char lettre);

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();

}
*/
