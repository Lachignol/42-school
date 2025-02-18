/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:13:19 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/23 19:07:03 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	compteur;
	int	temp;

	compteur = 0;
	while (compteur < size - 1)
	{
		if (tab[compteur] > tab[compteur + 1])
		{
			temp = tab[compteur];
			tab[compteur] = tab[compteur + 1];
			tab[compteur + 1] = temp;
			compteur = 0;
		}
		else
		{
			compteur ++;
		}
	}
}
/*
int	main(void)
{
	int	tab[] = {9, 1, 6, 1, 1, 6};
	int	i = 0 ;


	ft_sort_int_tab(tab, 5);

	while (i < 6)
	{
		printf("%d",tab[i]);
		i++;
	}
}
*/
