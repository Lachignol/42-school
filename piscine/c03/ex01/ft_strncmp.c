/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:19:12 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/25 11:56:11 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (!(s1[i] == s2[i]) || !(s1[i]) || !(s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*string1;
	char	*string2;
	unsigned int	size;

	string1 = "ABC";
	string2 = "ABCDEF";
	size = 5;
	printf("%d\n", ft_strncmp(string1, string2, size));
}
*/
