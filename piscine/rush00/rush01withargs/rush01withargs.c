/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01withargs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:02:11 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/22 12:22:36 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	premiereligne(int x)
{
	int	count;

	count = 1;
	while (count <= x)
	{
		if (count == 1)
		{
			ft_putchar('/');
			if (x == 1)
			{
				break ;
			}
		}
		if (count == x)
		{
			ft_putchar('\\');
		}
		if (count != 1 && count != x)
		{
			ft_putchar('*');
		}
		count++;
	}
	ft_putchar('\n');
}

void	derniereligne(int x)
{
	int	count;

	count = 1;
	while (count <= x)
	{
		if (count == 1)
		{
			ft_putchar('\\');
			if (x == 1)
			{
				break ;
			}
		}
		if (count == x)
		{
			ft_putchar('/');
		}
		if (count != 1 && count != x)
		{
			ft_putchar('*');
		}
		count++;
	}
	ft_putchar('\n');
}

void	middleligne(int x)
{
	int	count;

	count = 1;
	while (count <= x)
	{
		if (count == 1)
		{
			ft_putchar('*');
			if (x == 1)
			{
				break ;
			}
		}
		if (count == x)
		{
			ft_putchar('*');
		}
		if (count != 1 && count != x)
		{
			ft_putchar(' ');
		}
		count++;
	}
	ft_putchar('\n');
}

void	rush(x, y)
{
	int	count;

	count = 1;
	while (count <= y)
	{
		if (count == 1)
		{
			premiereligne(x);
			if (y == 1)
			{
				break ;
			}
		}
		if (count == y)
		{
			derniereligne(x);
		}
		if (count != 1 && count != y)
		{
			middleligne(x);
		}
		count++;
	}
}
/*

### Fonction [premierligne- derniereligne-middleligne] ###

1-declaration d'un compteur afin de referencer 
le nombre de tour de boucle equivalent a l'ordre 
des caracteres afficher sur la ligne.

2-notre boucle tourne tant que notre compteur n'est pas inferieur 
ou egal au nombre de la largeur recupere en parametre.

3-si le compteur est egal a 1 donc si nous somme sur le premier caractere:
 on affiche le caractere voulu.

5-si l'indice de la largeur donc x est seulement de 1 nous quittons
la boucle afin de ne pas tomber 
dans notre deuxieme if (pour le dernier caractere).

6-si le compteur est egal au nombre de caractere total 
de la ligne (donc le dernier caractere):
 on affiche le caractere voulu .

8-si le compteur nous indique que nous sommes
 pas sur le premier ni sur le dernier caractere de la ligne:
 on affiche le caractere voulu.

10-on incremente notre compteur de 1.

11-on affiche un saut de ligne apres la ligne genere.

### Fonction [rush] ###

 1-declaration d'un compteur afin de referencer 
 le nombre de tour de boucle equivalent a l'ordre 
 des caracteres afficher sur la ligne.

 2-notre boucle tourne tant que notre compteur n'est pas inferieur 
 ou egal au nombre de la largeur recupere en parametre.
 
 3-si le compteur est egal a 1 donc si nous somme sur la premiere ligne:
  on affiche la ligne voulu a l'aide de notre
  fonction premiereligne.
 
 5-si l'indice de la longeur donc y est seulement de 1 nous quittons
 la boucle afin de ne pas tomber 
 dans notre deuxieme if (pour la derniere ligne).
 
 6-si le compteur est egal au nombre total 
 ligne (donc derniere ligne):
  on affiche la ligne voulu a l'aide de notre fonction derniereligne .
 
 8-si le compteur nous indique que nous sommes
  ni sur la premiere ligne ni sur la derniere ligne:
  on affiche la ligne voulu a l'aide de notre 
  fonction middleligne.
 
 10-on incremente notre compteur de 1.
   */
