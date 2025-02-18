/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 22:01:35 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/09 20:06:38 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j])
		j++;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int	t_length(int size, char **strs, char *sep)
{
	int	total_l;
	int	i;

	total_l = 0;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		total_l += ft_strlen(strs[i]);
		i++;
	}
	total_l += ft_strlen(sep) * (size - 1);
	return (total_l);
}

char	*ft_malloc(int total_l)
{
	char	*result;

	result = (char *)malloc((total_l + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_len;
	int		i;
	char	*result;
	char	*pos;

	t_len = t_length(size, strs, sep);
	if (t_len == 0)
		return (ft_malloc(0));
	result = ft_malloc(t_len);
	if (!result)
		return (NULL);
	pos = result;
	i = 0;
	while (i < size)
	{
		pos = ft_strcat(pos, strs[i]);
		if (i < size - 1)
			pos = ft_strcat(pos, sep);
		i++;
	}
	return (result);
}
/*
int	main(int count, char **arg)
{
	int		size;
	char	*sep;
	char	*concatenate;

	(void)count;
	size = 3;
	sep = "++++";
	concatenate = ft_strjoin(size, arg, sep);
	printf("%s", concatenate);
	free(concatenate);
}
*/
