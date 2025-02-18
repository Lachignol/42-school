/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:16:33 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/19 19:36:10 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{	
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
int	main(void)
{
	int	number;
	int	number2;
	int	*pointeur_a;
	int 	*pointeur_b;

	number = 2;
	number2 = 4;
	pointeur_a = &number;
	pointeur_b = &number2;
	printf("nombre 1:%d \n",number);
	printf("nombre 2:%d \n",number2);
	ft_swap(pointeur_a,pointeur_b);
	printf("nombre 1:%d \n",number);
	printf("nombre 2:%d \n"	,number2);
		
}
*/
