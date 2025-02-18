/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:59:17 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/30 10:48:19 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	long	num;
	long	a;
	long	b;
	long	c;

	num = nb;
	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	if (num >= 10)
	{
		a = num / 10;
		b = num % 10 + '0';
		ft_putnbr(a);
		write(1, &b, 1);
	}
	if (num >= 0 && num <= 9)
	{
		c = num + '0';
		write(1, &c, 1);
	}
}
/*
int	main(void)
{
	long	number;

	number = -2147483648;
	ft_putnbr(number);

}
*/
