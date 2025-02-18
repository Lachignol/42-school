/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:35:40 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/22 21:15:37 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[10];

	src = "hello world";
	printf("%s", dest);
	ft_strcpy(dest, src);
	printf("%s", dest);
}
*/
