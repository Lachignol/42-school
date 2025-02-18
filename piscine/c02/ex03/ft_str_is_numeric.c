/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:21:56 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/23 12:42:18 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;

	str = "-565656";
	if (ft_str_is_numeric(str))
	{
		printf("la phrase contient seulement des nombres");
	}
	else
	{
		printf("la phrase contient d'autres cararcteres que des nombres");
	}
}
*/
