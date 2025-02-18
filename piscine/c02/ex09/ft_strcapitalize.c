/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:06:01 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/24 14:12:59 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'A') && (str[i] <= 'Z')))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_str_is_numeric(char str)
{
	if ((str >= '0') && (str <= '9'))
	{
	}
	else
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_alpha(char str)
{	
	if ((str >= 'a') && (str <= 'z'))
	{
	}
	else if ((str >= 'A') && (str <= 'Z'))
	{
	}
	else
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (ft_str_is_alpha(str[i]))
		{
			if (i == 0)
			{
				if ((str[i] <= 'a') && (str[i] >= 'z'))
				str[i] = str[i] - 32;
			}
			if (!ft_str_is_alpha(str[i - 1]))
			{			
				if (!ft_str_is_numeric(str[i - 1]))
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s\n", str);
}
*/
