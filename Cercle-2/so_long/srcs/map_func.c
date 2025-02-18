/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:52:20 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/04 15:27:53 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	get_nb_line_of_map(char *path_of_map)
{
	int		count;
	int		fd;
	char	*line;

	count = 0;
	fd = open(path_of_map, O_RDONLY, 0777);
	if (fd < 0)
		return (-1);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		if (line[0] == '\n')
			return (free(line), close(fd), 0);
		count++;
		free(line);
	}
	close(fd);
	return (count);
}

int	get_map(t_map *map, char *path_of_map)
{
	int		fd;
	char	*line;
	char	*buffer;
	char	*buff_temp;
	int		i;

	i = -1;
	buffer = ft_strdup("");
	fd = read_file(path_of_map);
	map->c_rows = get_nb_line_of_map(path_of_map);
	if (map->c_rows < 1)
		return (free(buffer), close(fd), 0);
	while (++i < map->c_rows)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		buff_temp = buffer;
		buffer = ft_strjoin(buff_temp, line);
		free(buff_temp);
		free(line);
	}
	if (buffer)
		map->map = ft_split(buffer, '\n');
	return (free(buffer), close(fd), 1);
}

void	print_map(t_map *map)
{
	int	i;

	i = 0;
	if (map->map)
	{
		while (map->map[i])
		{
			ft_printf("%s", map->map[i]);
			ft_printf("\n");
			i++;
		}
		return ;
	}
	else
		ft_printf("Carte vide !");
}

int	read_file(char *path_of_file)
{
	int	fd;

	fd = open(path_of_file, O_RDONLY, 0777);
	if (fd < 0)
	{
		ft_putstr_fd(strerror(errno), 2);
		close(fd);
	}
	return (fd);
}
