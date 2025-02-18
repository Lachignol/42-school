/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:33:20 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/10 20:13:54 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

char	**ft_split(char *str, char *charset);
int     checksize(char *str, char *charset);
int     checksize_principal(char *str, char *charset);
void     split(char *str,char *charset,char **tab);

char    **ft_split(char *str, char *charset)
{
	int	nb_of_str;
	char	**tab;
	
	nb_of_str = checksize_principal(str,charset);
	tab = malloc(sizeof(char) * (nb_of_str + 1));
	tab[nb_of_str +1][0] = '\0';
	split(str,charset,tab);
	return (tab);
}


int	is_separator(char *charset, char c)
{
	int	i;
	
	i = 0;

	while(charset[i])
	{
		if(charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}


int	checksize_principal(char *str, char *charset)
{
	int	number_of_string;
	int	i;

	i = 0;
	number_of_string = 0;
	while(str[i])
	{
		if(!is_separator(charset,str[i]))
		{
			number_of_string++;		
			while(!is_separator(charset,str[i]))
 				i++;
		}
		
		i++;
	}
	return (number_of_string);
}


void	enter_value(char *str,int start, int end,int index,char **tab)
{	


	int	i;
	int	j;
	int	id;
	
	id = index;
	j = 0;
	i = start;
	tab[index] = malloc(sizeof(char) * (end - start) + 1 );
	while(i < end)
	{
		tab[index][j] = str[i];
		j++;
		i++;

	}
	tab[index][j] = '\0';
}

void	split(char *str,char *charset,char **tab)
{
	int	i;
	int	start;
	int	end;
	int	index;
	
	index = 0;
	i = 0;
	start = 0;
	end = 0;

	while(str[i])
	{

		if(!is_separator(charset,str[i]))
		{
			start = i;

			while(!is_separator(charset,str[i]))
				i++;
			
			end = i;
		enter_value(str,start,end,index,tab);
			index++;
		}
		i++;
	}	

}


int	main(void)
{	
	char	*str;
	char	*charset;
	char	**subarr;
	int	i;

	i= 0 ;
	subarr = NULL;
	str = "bonjo;ur , ca va , ?";
	charset = ",";
	subarr = ft_split(str,charset);
	while(subarr[i])
	{

		printf("%s",subarr[i]);

		i++;



	}

}

