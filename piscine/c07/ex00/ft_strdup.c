/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:22:29 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/07 18:46:37 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{	
	int		i;
	char	*response;

	i = 0;
	while (src[i])
		i++;
	response = malloc(sizeof(char) * i + 1);
	if (!response)
		return (NULL);
	i = 0;
	while (src[i])
	{
		response[i] = src[i];
		i++;
	}	
	response[i] = '\0';
	return (response);
}
/*
int	main(void)
{
	char	*str1;

	str1 = "bonjour";
	printf("%s", ft_strdup(str1));
}
*/
