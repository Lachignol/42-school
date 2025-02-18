/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:31:34 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/18 21:29:00 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{	
	char	response;

	if (n < 0)
	{
		response = 'N';
	}
	else
	{
		response = 'P';
	}
	write(1, &response, 1);
}
/*
int	main(void)
{          
	ft_is_negative(0);
}
*/
