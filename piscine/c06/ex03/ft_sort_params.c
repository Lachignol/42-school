/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:42:33 by ascordil          #+#    #+#             */
/*   Updated: 2024/10/02 11:53:03 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
#include<string.h>

void	print_args(char **args)
{	
	int	i;
	int	j;

	i = 1;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			write(1, &args[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	arg_compare(char *arg1, char *arg2)
{
	int	i;

	i = 0;
	while (arg1[i] || arg2[i])
	{
		if ((arg1[i] != arg2[i]) || !(arg1[i]) || !(arg2[i]))
			return (arg1[i] - arg2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	if (argc > 1)
	{	
		while (i < argc)
		{	
			j = i + 1;
			while (argv[j])
			{
				if (arg_compare(argv[i], argv[j]) > 0)
				{
					temp = argv[j];
					argv[j] = argv[i];
					argv[i] = temp;
				}	
				j++;
			}
			i++;
		}
		print_args(argv);
	}
	return (0);
}
