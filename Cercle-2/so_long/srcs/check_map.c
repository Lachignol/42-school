/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:31:03 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/04 15:24:57 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int static	init_c_columns(t_map *map);

int	check_if_bordered(t_map *map)
{
	int		i;
	int		check_ok;

	i = -1;
	check_ok = 0;
	while (++i < map->c_rows)
	{
		if (map->map[i][0] != '1' ||
			map->map[i][ft_strlen(map->map[i]) - 1] != '1')
			return (0);
		if ((i == 0) || (i == map->c_rows - 1))
		{
			if (check_wall(map->map[i], '1'))
				check_ok++;
		}
	}
	return (check_ok == 2);
}

int	check_wall(char *line, int c)
{
	int	j;
	int	length;

	j = 0;
	length = ft_strlen(line);
	while (j < length - 1)
	{
		if (line[j] != c)
			return (0);
		j++;
	}
	return (1);
}

int static	init_c_columns(t_map *map)
{
	int	i;

	i = 0;
	while (map->map[0][i])
		i++;
	map->c_columns = i;
	return (0);
}

int	check_count_and_no_other_itm(t_map *map)
{
	int		i;
	int		j;

	i = -1;
	while (++i < map->c_rows)
	{
		j = -1;
		while (map->map[i][++j])
		{
			if (map->map[i][j] == map->player.char_player)
				update_count_and_moove_player(map, i, j);
			if (map->map[i][j] == map->collectible.char_collectible)
				update_count_and_moove_collectible(map, i, j);
			if (map->map[i][j] == map->exit.char_exit)
				update_count_and_moove_exit(map, i, j);
			if (map->map[i][j] == map->enemie.char_enemie)
				if (!update_count_and_pos_enemie(map, i, j))
					return (0);
			if (is_other_items(map->map[i][j]))
				return (0);
		}
	}
	return (map->player.count_player == 1
		&& map->collectible.count_collectible >= 1
		&& map->exit.count_exit == 1);
}

int	check_all_line_same_nb(t_map *map)
{
	int		i;
	int		j;

	i = 0;
	init_c_columns(map);
	while (i < map->c_rows)
	{
		j = 0;
		while (map->map[i][j])
			j++;
		if (map->c_columns != j)
			return (0);
		i++;
	}
	return (1);
}
