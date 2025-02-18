/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:02:11 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/21 13:03:41 by ascordil         ###   ########.fr       */
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
			ft_putchar('o');
			if (x == 1)
			{
				break ;
			}
		}
		if (count == x)
		{
			ft_putchar('o');
		}
		if (count != 1 && count != x)
		{
			ft_putchar('-');
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
			ft_putchar('o');
			if (x == 1)
			{
				break ;
			}
		}
		if (count == x)
		{
			ft_putchar('o');
		}
		if (count != 1 && count != x)
		{
			ft_putchar('-');
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
			ft_putchar('|');
			if (x == 1)
			{
				break ;
			}
		}
		if (count == x)
		{
			ft_putchar('|');
		}
		if (count != 1 && count != x)
		{
			ft_putchar(' ');
		}
		count++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
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
