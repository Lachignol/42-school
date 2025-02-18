/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:30:38 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/01 18:41:32 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1 ;
	if (argc > 1)
	{
		while (argv[i] && i > 0)
		{	
			j = 0;
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			i--;
			write(1, "\n", 1);
		}
		return (0);
	}	
	return (0);
}
