/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:04:23 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/08 20:29:38 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	checkbase(char *base, int *length)
{
	int	countbase;
	int	j;

	j = 0;
	countbase = 0;
	while (base[countbase])
	{
		if ((base[countbase] == '+') || (base[countbase] == '-')
			|| (base[countbase] == ' ') || (base[countbase] >= 9
				&& base[countbase] <= 13))
			return (0);
		j = 1;
		while (base[countbase + j++])
		{
			if (base[countbase] == base[countbase + j])
				return (0);
		}
		countbase++;
	}
	if (!((countbase == 0) || (countbase == 1)))
	{
		*length = countbase;
		return (1);
	}
	return (0);
}

int	find_index(char str, char *base)
{	
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (i);
		i++;
	}
	return (-1);
}

void	check_input(char **str, int *signe)
{
	while ((**str == ' ') || (**str == '\t')
		|| (**str == '-') || (**str == '+'))
	{
		if (**str == '-')
			*signe *= -1;
		(*str)++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	baselength;
	int	signe;
	int	*ptrsigne;
	int	*ptr;

	baselength = 0;
	signe = 1;
	ptrsigne = &signe;
	result = 0;
	ptr = &baselength;
	if (checkbase(base, ptr))
	{
		check_input(&str, ptrsigne);
		while (*str)
		{
			if (find_index(*str, base) == -1)
				return (result *= signe);
			result *= baselength;
			result += find_index(*str, base);
			str++;
		}
		return (result *= signe);
	}
	return (0);
}
/*
int	main(void)
{
	char	*base;

	base = "0123456789ABCDEF";
	printf("%d", ft_atoi_base("-123", base));
}
*/
