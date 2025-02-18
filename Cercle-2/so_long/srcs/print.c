/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:59:37 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	print_ground(t_game *game, int j, int i)
{
	j = j * IMG_WIDTH;
	i = i * IMG_WIDTH;
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->display.d_ground,
		j, i);
	return (1);
}

int	print_collectible(t_game *game, int j, int i)
{
	j = j * IMG_WIDTH;
	i = i * IMG_WIDTH;
	mlx_put_image_to_window(game->mlx, game->mlx_win,
		game->display.d_collect, j, i);
	return (1);
}

int	print_exit(t_game *game, int j, int i)
{
	j = j * IMG_WIDTH;
	i = i * IMG_WIDTH;
	mlx_put_image_to_window(game->mlx, game->mlx_win,
		game->display.d_exit, j, i);
	return (1);
}

int	print_player(t_game *game, int j, int i)
{
	j = j * IMG_WIDTH;
	i = i * IMG_WIDTH;
	if (ft_strcmp(game->lastdir, "UP") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_player_up, j, i);
	if (ft_strcmp(game->lastdir, "DOWN") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_player_down, j, i);
	if (ft_strcmp(game->lastdir, "LEFT") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_player_left, j, i);
	if (ft_strcmp(game->lastdir, "RIGHT") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_player_right, j, i);
	if (ft_strcmp(game->lastdir, "begin") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_player_down, j, i);
	return (1);
}
