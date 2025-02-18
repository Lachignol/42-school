/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:19:37 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/01 18:28:33 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int count, char **arg)
{
	int	i;
	int	j;

	i = 1;
	if (count > 1)
	{
		while (arg[i])
		{	
			j = 0;
			while (arg[i][j])
			{
				write(1, &arg[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		return (0);
	}
	return (0);
}
