/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:22:51 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/09 11:44:47 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		base_length(char *base);
int		count_digit(int baselength, int nbr);
char	*ft_itoa_base(char *base_to, int nbr);
int		checkbase(char *base, int *length);
int		find_index(char *base, char c);
void	skip_whitespace_and_return_signe(char **nbr, int *signe);
int		ft_atoi_base(char *base, char *nbr);
int		checkbase_only(char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		temp_res_int;
	char	*result;

	result = 0;
	if ((checkbase_only(base_from)) && (checkbase_only(base_to)))
	{
		temp_res_int = ft_atoi_base(base_from, nbr);
		result = ft_itoa_base(base_to, temp_res_int);
		return (result);
	}
	return (NULL);
}

int	checkbase_only(char *base)
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
	return (1);
}

int	base_length(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	count_digit(int baselength, int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr = nbr / baselength;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(char *base_to, int nbr)
{
	long	nb;
	int		baselength;
	char	*result;
	int		digit_count;

	nb = nbr;
	baselength = base_length(base_to);
	digit_count = count_digit(baselength, nb);
	result = (char *)malloc(sizeof(char) * digit_count + 1);
	if (!result)
		return (result);
	result[digit_count + 1] = '\0';
	if (nb < 0)
	{
		*result = '-';
		nb *= -1;
	}
	if (nb == 0)
		result[0] = base_to[nb % baselength];
	while (nb)
	{
		result[--digit_count] = base_to[nb % baselength];
		nb /= baselength;
	}
	return (result);
}
