/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:03:10 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 18:00:54 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/so_long.h>

void	update_count_and_moove_player(t_map *map, int x, int y)
{
	map->player.count_player++;
	map->player.position.x = x;
	map->player.position.y = y;
}

void	update_count_and_moove_collectible(t_map *map, int x, int y)
{
	map->collectible.count_collectible++;
	map->collectible.position.x = x;
	map->collectible.position.y = y;
}

void	update_count_and_moove_exit(t_map *map, int x, int y)
{
	map->exit.count_exit++;
	map->exit.position.x = x;
	map->exit.position.y = y;
}

int	update_count_and_pos_enemie(t_map *map, int x, int y)
{
	char	*begin;

	begin = "begin";
	if (map->enemie.count_enemie >= MAX_ENEMIES)
		return (error_msg("Too much enemies than authorized\n"), 0);
	map->enemies_pos[map->enemie.count_enemie].x = x;
	map->enemies_pos[map->enemie.count_enemie].y = y;
	map->enemies_pos[map->enemie.count_enemie].lastdirection = begin;
	map->enemie.count_enemie++;
	return (1);
}

int	add_map_to_game(t_game *game, t_map *map)
{
	game->map = *map;
	free(map);
	init_player_pos(game);
	if (init_mlx(game) == -1)
		return (clean_exit_prog(game), -1);
	init_image1(game);
	init_image2(game);
	init_image3(game);
	init_image4(game);
	srand(time(NULL));
	game->moove = 0;
	game->forbidden = 0;
	game->game_over = 0 ;
	game->you_win = 0 ;
	game->alert_general = 0 ;
	game->alert_general_notif = 0 ;
	return (1);
}
