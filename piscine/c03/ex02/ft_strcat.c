/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:58:07 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/25 20:06:33 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	len_dest = 0;
	i = 0;
	while (dest[len_dest])
	{
		len_dest++;
	}	
	while (src[i])
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
	char	dest[30] = "bonjour";
	char	src[] = "aurevoirc'estunaurevoir";
	
	printf("destination avant fonction: %s\n", dest);
	printf("retour de ma fonction: %s\n",ft_strcat(dest, src));
	printf("destination apres fonction %s\n", dest);
}
*/
