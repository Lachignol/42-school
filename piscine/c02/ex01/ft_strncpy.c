/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:33:02 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/25 12:15:47 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
void	viewtab_with_null_carac(char *tab, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{	
		if (!tab[i])
		{
			write(1, "null", 4);
		}
		else
		{
			write(1, &tab[i], 1);
			write(1, "-", 1);
		}
		i++;
	}
	write(1, "\n", 2);
}

int	main(void)
{
	unsigned int	size;
	char	dest[30];
	char	*src;

	src = "hello wo";
	size = 3;
	viewtab_with_null_carac(dest, size);
	printf("%s", ft_strncpy(dest, src, size));
	viewtab_with_null_carac(dest, size);
}
*/
