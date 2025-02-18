/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:04:01 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/01 18:18:07 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int	main(int count, char **arg)
{	
	int	i;

	i = 0 ;
	if (count == 1)
	{
		while (arg[0][i])
		{
			write(1, &arg[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
