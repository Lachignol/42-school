/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:36:10 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/26 14:12:05 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	len_tofind;
	int	i;
	int	j;

	len_tofind = 0;
	i = -1;
	j = 0;
	while (to_find[len_tofind])
		len_tofind++;
	while (str[++i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{	
			while (str[i + j] == to_find[j])
			{
				j++;
				if (j == len_tofind)
					return (&str[i]);
			}
		}
	}
	if (len_tofind == 0)
		return (str);
	return (NULL);
}
/*
int	main(void)
{	
	char	*str = "testamentma voiture et test affaires";
	char	*tofind = "voiture";

	printf("%s\n", ft_strstr(str, tofind));
}
*/
