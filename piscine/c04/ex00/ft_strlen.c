/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:39:00 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/26 10:57:05 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
	}
	return (i);
}
/*
int	main(void)
{
	char	*str;

	str = "";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return (0);
}
*/
