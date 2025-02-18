/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:44:26 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/06 12:09:43 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
/*
int	str_len_sup3(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;

	if (length <= 3)
		return (0);
	return (1);
}

int	main(int count,char **argv)
{
	if (count > 1)
		printf("%d",ft_count_if(argv,&str_len_sup3));	
}
*/
