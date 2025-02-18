/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:40:04 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 15:48:38 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_print_numbers(void);
void	ft_putchar(char lettre);

void	ft_print_numbers(void)
{
	int	digit;

	digit = 0;
	while (digit < 10)
	{
		ft_putchar(digit + '0');
		digit++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/
