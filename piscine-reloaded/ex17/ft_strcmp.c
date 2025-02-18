/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:41:57 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 12:57:56 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (!(s1[i]) || !(s2[i]) || (s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char    *string1;
	char    *string2;

	string1 = "chat";
	string2 = "chfdssfsf";
	printf("%d\n", ft_strcmp(string1, string2));
}
*/
