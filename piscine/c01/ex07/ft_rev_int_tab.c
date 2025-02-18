/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:52:38 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/22 17:11:16 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
void	viewtab(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		write(1, &tab[i], 1);
		i++;
	}
}

int	main(void)
{
	int	tab[4];

	tab[0] = '1';
	tab[1] = '2';
	tab[2] = '3';
	tab[3] = '\0';
	viewtab(tab);
	ft_rev_int_tab(tab, 3);
	viewtab(tab);
}
*/
