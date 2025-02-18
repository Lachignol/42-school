/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:53:53 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/06 10:37:27 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
/*
void	ft_putnbr(int	nb)
{
	long	nbr;
	long	a;
	long	b;
	long	c;
	
	nbr = nb;
	if (nbr < 0)
	{
		write(1,"-",1);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		a = nbr / 10;
		b = nbr % 10 + '0';
		ft_putnbr(a);
		write(1,&b,1);
	}
	if (nbr < 10)
	{
		c = nbr % 10 + '0';
		write(1,&c,1);
	}
}

int	ft_atoi(char *nbr)
{
	int	signe;
	int	i;
	int	result;

	i = 0;
	signe = 1;
	result = 0;
	if(*nbr == '-')
	{
		nbr++;
		signe *= -1;
	}
	while (nbr[i])
	{
		result *= 10;
		result += nbr[i] - '0';
		i++;
	}
	return (result * signe);




}
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main(int count, char **argv)
{
	int	tab[6] = {1, 2, 3, 4, 5, 6};

	ft_foreach(tab, 6, &ft_putnbr);
	if (count > 1)
		ft_putnbr(ft_atoi(argv[1]));

}
*/
