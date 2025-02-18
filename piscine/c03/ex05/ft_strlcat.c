/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:50:15 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/26 16:09:37 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
/*
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
{
	unsigned int	src_len;
	unsigned int	i;
	

	while (src[i])
		src_len++;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';	
	return (src_len);
}

int	main(void)
{
	char	dest[33] = "bonjour";
	char	src[] = "aurevoirc'estunaurevoirpouimonsieur";
	unsigned int	size = 35;
	printf("destination avant fonction: %s\n", dest);
	printf("retour de ma fonction: %s\n",ft_strncat(dest, src, size));
	printf("destination apres fonction %s\n", dest);
}
*/
