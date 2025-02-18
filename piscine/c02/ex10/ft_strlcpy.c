/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:14:21 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/24 16:59:28 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count_dest;
	unsigned int	count_src;

	count_dest = 0;
	count_src = 0;
	if (size > 0)
	{
		while (count_dest < size - 1)
		{
			dest[count_dest] = src[count_dest];
			count_dest++;
		}
		dest[count_dest] = '\0';
	}
	while (src[count_src])
	{
		count_src++;
	}
	return (count_src);
}
/*
int	main(void)
{	
	char	*source;
	char	dest[10];

	source = "123456789";
	printf("destination avant fonction: %s\n",dest);
	printf("%d\n",ft_strlcpy(dest, source , 10));
	printf("destination apres fonction: %s\n",dest); 
}
*/
