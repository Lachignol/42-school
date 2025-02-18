/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:13:14 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/05 15:53:52 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 2;
	div = 0;
	mod = 0;
	printf("div before:%d\n",div);
	printf("mod before:%d\n",mod);
	ft_div_mid(a,b,&div,&mod);
	printf("div after:%d\n",div);
	printf("mod after:%d\n",mod);
}
*/
