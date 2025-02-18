/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:58:32 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	check_flood_fill(t_map *map)
{
	t_map	*map_copy;

	map_copy = copy_map_for_flood_fill(map);
	if (!map_copy)
		return (cleaning_map(map_copy), -1);
	map_copy->c_rows = map->c_rows;
	map_copy->c_columns = map->c_columns;
	flood_fill(map_copy, map->player.position.x, map->player.position.y, 'V');
	if (!check_all_item_are_accessible(map, map_copy))
		return (cleaning_map(map_copy), 0);
	cleaning_map(map_copy);
	return (1);
}

void	flood_fill(t_map *map_copy, int x, int y, char newchar)
{
	if ((x < 0 || x >= map_copy->c_rows - 1) || (y < 0
			|| y >= map_copy->c_columns - 1)
		|| map_copy->map[x][y] == 'V' || map_copy->map[x][y] == '1')
		return ;
	map_copy->map[x][y] = newchar;
	flood_fill(map_copy, x - 1, y, newchar);
	flood_fill(map_copy, x + 1, y, newchar);
	flood_fill(map_copy, x, y + 1, newchar);
	flood_fill(map_copy, x, y - 1, newchar);
}

int	check_all_item_are_accessible(t_map *map, t_map *map_copy)
{
	int	i;
	int	j;

	i = 0;
	while (map->map[i])
	{
		j = 0;
		while (map->map[i][j])
		{
			if (map->map[i][j] == map->collectible.char_collectible
				&& map_copy->map[i][j] != 'V')
				return (error_msg("Collectible not accessible"), 0);
			if (map->map[i][j] == map->exit.char_exit
				&& map_copy->map[i][j] != 'V')
				return (error_msg("Exit not accessible"), 0);
			if (map->map[i][j] == map->enemie.char_enemie
				&& map_copy->map[i][j] != 'V')
				return (error_msg("One enemie is not accessible"), 0);
			j++;
		}
		i++;
	}
	return (1);
}

t_map	*copy_map_for_flood_fill(t_map *map)
{
	t_map	*map_copy;
	int		i;
	int		j;

	map_copy = malloc(sizeof(*map_copy));
	if (!map_copy)
		return (cleaning_map(map_copy), NULL);
	i = -1;
	map_copy->map = malloc(sizeof(char *) * (map->c_rows + 1));
	if (!map_copy->map)
		return (cleaning_map(map_copy), NULL);
	while (map->map[++i])
	{
		map_copy->map[i] = malloc(sizeof(char) * (map->c_columns + 1));
		if (!map_copy->map[i])
			return (cleaning_map(map_copy), NULL);
		j = 0;
		while (map->map[i][j])
		{
			map_copy->map[i][j] = map->map[i][j];
			j++;
		}
		map_copy->map[i][j] = '\0';
	}
	return (map_copy->map[i] = NULL, map_copy);
}
