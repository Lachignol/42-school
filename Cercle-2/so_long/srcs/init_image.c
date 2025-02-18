/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:03:10 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/04 16:26:53 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

void	init_image1(t_game *game)
{
	game->display.player_left = "./srcs/imgs/perso_left.xpm";
	game->display.d_player_left = mlx_xpm_file_to_image(game->mlx,
			game->display.player_left, &game->img_width, &game->img_height);
	game->display.player_right = "./srcs/imgs/perso_right.xpm";
	game->display.d_player_right = mlx_xpm_file_to_image(game->mlx,
			game->display.player_right, &game->img_width, &game->img_height);
	game->display.player_up = "./srcs/imgs/perso_up.xpm";
	game->display.d_player_up = mlx_xpm_file_to_image(game->mlx,
			game->display.player_up, &game->img_width, &game->img_height);
	game->display.player_down = "./srcs/imgs/perso_down.xpm";
	game->display.d_player_down = mlx_xpm_file_to_image(game->mlx,
			game->display.player_down, &game->img_width, &game->img_height);
	game->display.exit = "./srcs/imgs/exit.xpm";
	game->display.d_exit = mlx_xpm_file_to_image(game->mlx, game->display.exit,
			&game->img_width, &game->img_height);
	game->display.collectible = "./srcs/imgs/collectible.xpm";
	game->display.d_collect = mlx_xpm_file_to_image(game->mlx,
			game->display.collectible,
			&game->img_width, &game->img_height);
	game->display.ground = "./srcs/imgs/ground.xpm";
	game->display.d_ground = mlx_xpm_file_to_image(game->mlx,
			game->display.ground, &game->img_width, &game->img_height);
}

void	init_image2(t_game *game)
{
	game->display.wall_one = "./srcs/imgs/wall_one.xpm";
	game->display.d_wall_one = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_one,
			&game->img_width, &game->img_height);
	game->display.wall_two = "./srcs/imgs/wall_two.xpm";
	game->display.d_wall_two = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_two,
			&game->img_width, &game->img_height);
	game->display.wall_left = "./srcs/imgs/wall_left.xpm";
	game->display.d_wall_left = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_left,
			&game->img_width, &game->img_height);
	game->display.wall_right = "./srcs/imgs/wall_right.xpm";
	game->display.d_wall_right = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_right,
			&game->img_width, &game->img_height);
	game->display.wall_up = "./srcs/imgs/wall_up.xpm";
	game->display.d_wall_up = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_up,
			&game->img_width, &game->img_height);
	game->display.wall_down = "./srcs/imgs/wall_down.xpm";
	game->display.d_wall_down = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_down,
			&game->img_width, &game->img_height);
}

void	init_image3(t_game *game)
{
	game->display.wall_c_right_up = "./srcs/imgs/wall_c_right_up.xpm";
	game->display.d_wall_c_right_up = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_c_right_up, &game->img_width, &game->img_height);
	game->display.wall_c_right_down = "./srcs/imgs/wall_c_right_down.xpm";
	game->display.d_wall_c_right_down = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_c_right_down, &game->img_width,
			&game->img_height);
	game->display.wall_c_left_down = "./srcs/imgs/wall_c_left_down.xpm";
	game->display.d_wall_c_left_down = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_c_left_down,
			&game->img_width, &game->img_height);
	game->display.wall_c_left_up = "./srcs/imgs/wall_c_left_up.xpm";
	game->display.d_wall_c_left_up = mlx_xpm_file_to_image(game->mlx,
			game->display.wall_c_left_up,
			&game->img_width, &game->img_height);
}

void	init_image4(t_game *game)
{
	game->display.enemie_left = "./srcs/imgs/enemie_left.xpm";
	game->display.d_enemie_left = mlx_xpm_file_to_image(game->mlx,
			game->display.enemie_left, &game->img_width, &game->img_height);
	game->display.enemie_right = "./srcs/imgs/enemie_right.xpm";
	game->display.d_enemie_right = mlx_xpm_file_to_image(game->mlx,
			game->display.enemie_right, &game->img_width, &game->img_height);
	game->display.enemie_up = "./srcs/imgs/enemie_up.xpm";
	game->display.d_enemie_up = mlx_xpm_file_to_image(game->mlx,
			game->display.enemie_up, &game->img_width, &game->img_height);
	game->display.enemie_down = "./srcs/imgs/enemie_down.xpm";
	game->display.d_enemie_down = mlx_xpm_file_to_image(game->mlx,
			game->display.enemie_down, &game->img_width, &game->img_height);
}
