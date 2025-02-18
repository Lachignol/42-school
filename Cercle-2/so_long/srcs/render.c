/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 18:00:24 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	render(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	while (game->map.map[++i])
	{
		j = -1;
		while (game->map.map[i][++j])
		{
			if (game->map.map[i][j] == 'P')
				print_player(game, j, i);
			if (game->map.map[i][j] == '0')
				print_ground(game, j, i);
			if (game->map.map[i][j] == '1')
				print_wall(game, j, i);
			if (game->map.map[i][j] == 'C')
				print_collectible(game, j, i);
			if (game->map.map[i][j] == 'E')
				print_exit(game, j, i);
			if (game->map.map[i][j] == 'Z')
				print_enemie(game, j, i);
			print_more_info(game);
		}
	}
	return (timer_set(game));
}

int	print_more_info(t_game *game)
{
	if (game->forbidden == -1)
		print_not_all_collectible(game);
	if (game->alert_general_notif)
	{
		sleep(PRINT_TIME);
		game->alert_general_notif = 0;
		game->alert_general = 1;
	}
	if (game->game_over)
		return (sleep(PRINT_TIME), close_window(game), 1);
	if (game->you_win)
		return (sleep(PRINT_TIME), close_window(game), 1);
	print_game_moove(game);
	return (1);
}

int	timer_set(t_game *game)
{
	if ((game->timer == SPEED_ENEMIES - ALERT_GENERAL)
		&& (game->alert_general) && (ALERT_GENERAL != 0))
		return (game->timer = 1, enemies_moove(game), 1);
	if (game->timer == SPEED_ENEMIES)
		return (game->timer = 1, enemies_moove(game), 1);
	else
		return (game->timer++, 1);
}

int	refresh_render(t_game *game)
{
	mlx_clear_window(game->mlx, game->mlx_win);
	mlx_destroy_image(game->mlx, game->img);
	game->img = mlx_new_image(game->mlx, game->map.c_columns * IMG_WIDTH,
			game->map.c_rows * IMG_HEIGHT);
	game->addr = mlx_get_data_addr(game->img, &game->bits_per_pixel,
			&game->line_length, &game->endian);
	return (1);
}
