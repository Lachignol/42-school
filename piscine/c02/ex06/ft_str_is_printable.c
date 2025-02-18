/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:00:38 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/24 20:57:07 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 0) && (str[i] <= 31)) || (str[i] == 127))
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

	str = "sfsdf";
	if (ft_str_is_printable(str))
	{
		printf("la phrase contient seulement des caracteres imprimable ");
	}
	else
	{
		printf("autres caractere que seulement des caracteres immprimables");
	}
}
*/
