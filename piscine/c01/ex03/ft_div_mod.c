/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:10:17 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/19 21:22:17 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division;
	int	rest_division;

	division = a / b;
	rest_division = a % b;
	*div = division;
	*mod = rest_division;
}
/*
int	main(void)
{
	int a;
	int b;
	int result_div;
	int result_mod;
	int *pointeur_div;
	int *pointeur_mod;

	a = 10;
	b = 4;
	pointeur_div = &result_div;
	pointeur_mod = &result_mod;
	printf("resultat division avant fonction :%d \n",result_div);
    	printf("resultat mod avant fonction :%d \n",result_mod);
	ft_div_mod(a, b, pointeur_div, pointeur_mod);

	printf("resultat division apres fonction :%d \n",result_div); 
	printf("resultat mod apres fonction :%d	 \n",result_mod);
}
*/
