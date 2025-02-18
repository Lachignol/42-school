/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:13:40 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 15:16:23 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	while (src[i])
		i++;
	result = malloc(sizeof(char) * i);
	if (!result)
		return (NULL);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*str1;
 
	str1 = "bonjour";
	printf("%s", ft_strdup(str1));
}
*/
