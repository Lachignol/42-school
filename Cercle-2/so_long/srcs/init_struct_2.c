/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:03:10 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:59:02 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

void	init_ground(t_map *map)
{
	map->ground.char_ground = '0';
}

void	init_wall(t_map *map)
{
	map->wall.char_wall = '1';
}

void	init_player_pos(t_game *game)
{
	char	*begin;

	begin = "begin";
	game->x = game->map.player.position.x;
	game->y = game->map.player.position.y;
	game->lastdir = begin;
}

void	init_enemie(t_map *map)
{
	map->enemie.char_enemie = 'Z';
	map->enemie.count_enemie = 0;
	map->enemie.position.x = -1;
	map->enemie.position.y = -1;
}
