/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:52:22 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/06 20:18:57 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_dest;
	unsigned int	i;

	len_dest = 0;
	i = 0 ;
	while (dest[len_dest])
	{
		len_dest++;
	}
	while ((src[i]) && (i < nb))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[33] = "bonjour";
	char	src[] = "aurevoir";
	unsigned int	size = 8;
	printf("destination avant fonction: %s\n", dest);
	printf("retour de ma fonction: %s\n",ft_strncat(dest, src, size));
	printf("destination apres fonction %s\n", dest);
}
*/
