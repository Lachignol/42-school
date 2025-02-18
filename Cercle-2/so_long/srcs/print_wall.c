/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/04 18:07:02 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	print_wall(t_game *game, int j, int i)
{
	int	py;
	int	px;

	py = j * IMG_WIDTH;
	px = i * IMG_WIDTH;
	print_wall_border(game, j, i);
	print_wall_corner(game, j, i);
	if ((i != game->map.c_rows - 1) && (i != 0)
		&& (j != game->map.c_columns - 1) && (j != 0))
	{
		if (!game->alert_general)
			mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->display.d_wall_one, py, px);
		else
		{
			if (game->timer % 2 == 0)
				mlx_put_image_to_window(game->mlx, game->mlx_win,
					game->display.d_wall_two, py, px);
			else
				mlx_put_image_to_window(game->mlx, game->mlx_win,
					game->display.d_wall_one, py, px);
		}
	}
	return (1);
}

int	print_wall_corner(t_game *game, int j, int i)
{
	int	py;
	int	px;

	py = j * IMG_WIDTH;
	px = i * IMG_WIDTH;
	if (i == 0 && j == 0)
		return (mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->display.d_wall_c_left_up, py, px), 1);
	else if ((i == game->map.c_rows - 1) && (j == game->map.c_columns -1))
		return (mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->display.d_wall_c_right_down, py, px), 1);
	else if ((i == 0) && (j == game->map.c_columns -1))
		return (mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->display.d_wall_c_right_up, py, px), 1);
	else if ((i == game->map.c_rows - 1) && (j == 0))
		return (mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->display.d_wall_c_left_down, py, px), 1);
	return (0);
}

int	print_wall_border(t_game *game, int j, int i)
{
	int	py;
	int	px;

	py = j * IMG_WIDTH;
	px = i * IMG_WIDTH;
	if (i == 0)
		return (mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->display.d_wall_up, py, px), 1);
	else if (i == game->map.c_rows - 1)
		return (mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->display.d_wall_down, py, px), 1);
	else if (j == 0)
		return (mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->display.d_wall_left, py, px), 1);
	else if (j == game->map.c_columns - 1)
		return (mlx_put_image_to_window(game->mlx, game->mlx_win,
				game->display.d_wall_right, py, px), 1);
	return (0);
}
