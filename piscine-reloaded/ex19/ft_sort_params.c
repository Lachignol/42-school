/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:22:54 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 15:57:04 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char letter);

void	print_args(int count, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
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

int	ft_argcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (!(s1[i]) || !(s2[i]) || (s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int count, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	if (count > 1)
	{
		while (i < count)
		{
			j = i + 1 ;
			while (argv[j])
			{
				if (ft_argcmp(argv[i], argv[j]) > 0)
				{
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;
				}
				j++;
			}
			i++;
		}
		print_args(count, argv);
	}
	return (0);
}
