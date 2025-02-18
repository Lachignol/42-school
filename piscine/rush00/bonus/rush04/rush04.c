/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:02:11 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/21 19:27:01 by nitrebou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	premiereligne(int x)
{
	int	count;

	count = 1;
	while (count <= x)
	{
		if (count == 1)
		{
			ft_putchar('A');
			if (x == 1)
			{
				break ;
			}
		}
		if (count == x)
		{
			ft_putchar('C');
		}
		if (count != 1 && count != x)
		{
			ft_putchar('B');
		}
		count++;
	}
	ft_putchar('\n');
}

void	derniereligne(int x)
{
	int	count;

	count = 1;
	while (count <= x)
	{
		if (count == 1)
		{
			ft_putchar('C');
			if (x == 1)
			{
				break ;
			}
		}
		if (count == x)
		{
			ft_putchar('A');
		}
		if (count != 1 && count != x)
		{
			ft_putchar('B');
		}
		count++;
	}
	ft_putchar('\n');
}

void	middleligne(int x)
{
	int	count;

	count = 1;
	while (count <= x)
	{
		if (count == 1)
		{
			ft_putchar('B');
			if (x == 1)
			{
				break ;
			}
		}
		if (count == x)
		{
			ft_putchar('B');
		}
		if (count != 1 && count != x)
		{
			ft_putchar(' ');
		}
		count++;
	}
	ft_putchar('\n');
}

void	rush(x, y)
{
	int	count;

	count = 1;
	while (count <= y)
	{
		if (count == 1)
		{
			premiereligne(x);
			if (y == 1)
			{
				break ;
			}
		}
		if (count == y)
		{
			derniereligne(x);
		}
		if (count != 1 && count != y)
		{
			middleligne(x);
		}
		count++;
	}
}
