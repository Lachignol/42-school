/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:20:23 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/09 11:46:38 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		base_length(char *base);
int		count_digit(int baselength, int nbr);
char	*ft_itoa_base(char *base_to, int nbr);
int		checkbase(char *base, int *length);
int		find_index(char *base, char c);
void	skip_whitespace_and_return_signe(char **nbr, int *signe);
int		ft_atoi_base(char *base, char *nbr);
int		checkbase_only(char *base);

int	checkbase(char *base, int *length)
{	
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{	
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)
			|| base[i] == '-' || base[i] == '+')
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	*length = i;
	return (1);
}

int	find_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	skip_whitespace_and_return_signe(char **nbr, int *signe)
{
	while (**nbr == ' ' || (**nbr >= 9 && **nbr <= 13)
		|| **nbr == '-' || **nbr == '+')
	{
		if (**nbr == '-')
		{
			*signe *= -1;
		}
		(*nbr)++;
	}
}

int	ft_atoi_base(char *base, char *nbr)
{
	int	baselength;
	int	signe;
	int	result;

	baselength = 0;
	signe = 1;
	result = 0;
	if (checkbase(base, &baselength))
	{
		skip_whitespace_and_return_signe(&nbr, &signe);
		while (*nbr)
		{
			if (find_index(base, *nbr) == -1)
				return (result * signe);
			result *= baselength;
			result += find_index(base, *nbr);
			nbr++;
		}	
		return (result * signe);
	}
	return (0);
}
