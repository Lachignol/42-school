/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:31:55 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/07 15:30:31 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	read_file(char *name, char *error);
void	print_error(char *error);

int	main(int count, char **argv)
{
	char	*error1;
	char	*error2;
	char	*error3;

	error1 = "File name missing.";
	error2 = "Too many arguments.";
	error3 = "Cannot read file.";
	if (count == 1)
		print_error(error1);
	else if (count > 2)
		print_error(error2);
	else
		read_file(argv[1], error3);
}

void	print_error(char *error)
{
	while (*error)
	{
		write(2, error, 1);
		error++;
	}
	write(2, "\n", 1);
}

void	read_file(char *name, char *error)
{
	int			fic;
	char		buff[100];
	ssize_t		octal_read;

	fic = open(name, O_RDONLY);
	if (fic < 0)
		print_error(error);
	octal_read = read(fic, buff, 100);
	while (octal_read > 0)
	{	
		write(1, buff, octal_read);
		octal_read = read(fic, buff, 100);
	}
	close(fic);
}
