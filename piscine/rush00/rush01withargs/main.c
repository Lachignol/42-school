/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:44:18 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/22 16:25:53 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	rush(int x, int y);

int	atoi(char *argsv)
{
	int	number;
	int	i;

	i = 0;
	number = 0;
	while (argsv[i])
	{
		number = number * 10;
		number += argsv[i] - '0';
		i++;
	}
	return (number);
}

int	check_good_numbers(int x, int y)
{
	if ((x <= 0) || (y <= 0))
	{	
		return (0);
	}
	else
	{
		return (1);
	}
}

int	main(int argsc, char **argsv)
{
	int		x;
	int		y;
	int		i;
	char	*s;

	x = atoi(argsv[1]);
	y = atoi(argsv[2]);
	s = "rentrez seulement deux nombres superieur a 0 !! \n";
	i = 0;
	if ((check_good_numbers(x, y)) && (argsc == 3))
	{
		rush(x, y);
		return (0);
	}
	else
	{
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	return (0);
}
