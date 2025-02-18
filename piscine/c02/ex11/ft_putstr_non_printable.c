/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:02:04 by ascordil          #+#    #+#             */
/*   Updated: 2024/09/24 17:46:03 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

void	ft_putstr_non_printable(char *str);

void	printhexa(char str)
{
	

}
void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0) && (str[i] >= 31) || (str[i] === 127))
		{



		}

		write(1, &str[i], 1 );		
		i++;
	}
}

int	main()
{
	char	*str;

	str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
