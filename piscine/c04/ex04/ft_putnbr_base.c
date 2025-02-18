/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:53:51 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/30 15:25:54 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	checkbase(char *base, int *length)
{
	int	countbase;
	int	j;

	j = 0;
	countbase = 0;
	while (base[countbase])
	{	
		if ((base[countbase] == '+') || (base[countbase] == '-'))
			return (0);
		j = 1;
		while (base[countbase + j])
		{
			if (base[countbase] == base[countbase + j])
				return (0);
			j++;
		}
		countbase++;
	}
	if (!((countbase == 0) || (countbase == 1)))
	{
		*length = countbase;
		return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{	
	long	num;
	int		*pt;
	int		baselength;

	baselength = 0;
	pt = &baselength;
	num = nbr;
	if (checkbase(base, pt))
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num *= -1;
		}		
		if (num >= baselength)
		{
			ft_putnbr_base(num / baselength, base);
			write(1, &base[num % baselength], 1);
		}
		if (num >= 0 && num < baselength)
			write(1, &base[num], 1);
	}
}
/*
int	main(void)
{
	char	*base;	

	base = "01";
	ft_putnbr_base(-1248,base);

}
*/
