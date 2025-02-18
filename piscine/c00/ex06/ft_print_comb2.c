/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:38:01 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/02 17:14:45 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	a;

	j = 0;
	while (j <= 98)
	{
		i = j + 1;
		while (i <= 99)
		{
			a = (j / 10 + '0');
			write(1, &a, 1);
			a = (j % 10 + '0');
			write(1, &a, 1);
			write(1, " ", 1);
			a = (i / 10 + '0');
			write(1, &a, 1);
			a = (i % 10 + '0');
			write(1, &a, 1);
			if (!(j == 98 && i == 99))
				write(1, ", ", 2);
			i++;
		}
		j++;
	}
}	
/*
int	main(void)
{
	ft_print_comb2();
}
*/	
