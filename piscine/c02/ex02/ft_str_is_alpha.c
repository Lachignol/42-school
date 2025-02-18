/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:40:48 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/23 12:20:38 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
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

	str = "testF6565onctionelle";
	if (ft_str_is_alpha(str))
	{
		printf("la phrase contient seulement des phrases de  l'alph");
	}
	else
	{	
		printf("la phrase contient d'autres cararcteres que alpha");
	}
}
*/
