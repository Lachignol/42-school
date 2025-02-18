/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:59:03 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 15:56:18 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char letter);

int	main(int count, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (count > 1)
	{
		while (i < count)
		{
			j = 0;
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
		i++;
		}
	}
}
