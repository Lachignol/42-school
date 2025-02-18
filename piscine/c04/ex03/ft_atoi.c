/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:20:51 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/30 10:51:20 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_atoi(char *str);

int	white_space(char str)
{
	if (str == '\t' || str == '\n' || str == '\v'
		|| str == '\f' || str == '\r' || str == ' ' )
		return (1);
	else
		return (0);
}

void	pos_or_neg(char str, int *signe)
{
	if (str == '-')
		*signe *= -1;
}

int	ft_atoi(char *str)
{	
	int	signe;
	int	*pointeursigne;
	int	resultat;

	signe = 1;
	pointeursigne = &signe;
	resultat = 0;
	while (white_space(*str))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		pos_or_neg(*str, pointeursigne);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultat *= 10;
		resultat += *str - '0';
		str++;
	}
	resultat *= signe;
	return (resultat);
}
/*
void	putnbr(int number)
{
	char	final_number;
	char	first_number;

	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number < 10)
	{
		final_number = number + '0';
		write(1, &final_number, 1);
	}
	if (number >= 10)
	{
		putnbr(number / 10);
		first_number = number % 10 + '0';
		write(1, &first_number, 1);
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{	
		printf("%s\n", argv[1]);
		str = argv[1];
		printf("%d\n", ft_atoi(str));
		putnbr(ft_atoi(str));
	}
}
*/
