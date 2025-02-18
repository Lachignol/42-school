/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:03:10 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 18:06:01 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

t_game	*init_game(void)
{
	t_game	*game;

	game = malloc(sizeof(*game));
	if (!game)
		return (NULL);
	game->map.map = NULL;
	game->mlx = NULL;
	game->timer = 1;
	game->alert_general = 0;
	return (game);
}

t_map	*init_map(void)
{
	t_map	*map;

	map = malloc(sizeof(*map));
	if (!map)
		return (NULL);
	map->map = NULL;
	map->c_rows = -1;
	map->c_columns = -1;
	init_collectible(map);
	init_player(map);
	init_exit(map);
	init_ground(map);
	init_wall(map);
	init_enemie(map);
	return (map);
}

void	init_player(t_map *map)
{
	map->player.char_player = 'P';
	map->player.count_player = 0;
	map->player.position.x = -1;
	map->player.position.y = -1;
}

void	init_collectible(t_map *map)
{
	map->collectible.char_collectible = 'C';
	map->collectible.count_collectible = 0;
	map->collectible.position.x = -1;
	map->collectible.position.y = -1;
}

void	init_exit(t_map *map)
{
	map->exit.char_exit = 'E';
	map->exit.count_exit = 0;
	map->exit.position.x = -1;
	map->exit.position.y = -1;
}
