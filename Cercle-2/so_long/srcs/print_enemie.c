/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:59:45 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	print_enemie(t_game *game, int j, int i)
{
	int	k ;

	k = -1;
	while (++k < game->map.enemie.count_enemie)
	{
		if ((game->map.enemies_pos[k].x == i)
			&& (game->map.enemies_pos[k].y == j))
		{	
			print_enemie_up_or_down(game, j, i, k);
			print_enemie_right_or_left(game, j, i, k);
		}
	}
	return (1);
}

int	print_enemie_up_or_down(t_game *game, int j, int i, int k)
{
	if (ft_strcmp(game->map.enemies_pos[k].lastdirection, "UP") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_enemie_up, j * IMG_HEIGHT, i * IMG_WIDTH);
	if (ft_strcmp(game->map.enemies_pos[k].lastdirection, "DOWN") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_enemie_down, j * IMG_HEIGHT, i * IMG_WIDTH);
	return (1);
}

int	print_enemie_right_or_left(t_game *game, int j, int i, int k)
{
	if (ft_strcmp(game->map.enemies_pos[k].lastdirection, "LEFT") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_enemie_left, j * IMG_HEIGHT, i * IMG_WIDTH);
	if (ft_strcmp(game->map.enemies_pos[k].lastdirection, "RIGHT") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_enemie_right, j * IMG_HEIGHT, i * IMG_WIDTH);
	if (ft_strcmp(game->map.enemies_pos[k].lastdirection, "begin") == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->display.d_enemie_down, j * IMG_HEIGHT, i * IMG_WIDTH);
	return (1);
}
