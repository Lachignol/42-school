/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:35:07 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/23 15:03:05 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			str[i] = str[i] + 32;
		}
		else
		{
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "SfdDFWWEWegdgf";

	ft_strlowcase(str);
	printf("%s", str);
}
*/
