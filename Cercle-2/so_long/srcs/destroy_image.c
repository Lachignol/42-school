/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/04 16:29:18 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	destroy_image(t_game *game)
{
	mlx_destroy_image(game->mlx, game->display.d_wall_one);
	mlx_destroy_image(game->mlx, game->display.d_wall_two);
	mlx_destroy_image(game->mlx, game->display.d_wall_left);
	mlx_destroy_image(game->mlx, game->display.d_wall_c_left_down);
	mlx_destroy_image(game->mlx, game->display.d_wall_c_left_up);
	mlx_destroy_image(game->mlx, game->display.d_wall_c_right_up);
	mlx_destroy_image(game->mlx, game->display.d_wall_c_right_down);
	mlx_destroy_image(game->mlx, game->display.d_wall_right);
	mlx_destroy_image(game->mlx, game->display.d_wall_down);
	mlx_destroy_image(game->mlx, game->display.d_wall_up);
	mlx_destroy_image(game->mlx, game->display.d_collect);
	mlx_destroy_image(game->mlx, game->display.d_enemie_left);
	mlx_destroy_image(game->mlx, game->display.d_enemie_right);
	mlx_destroy_image(game->mlx, game->display.d_enemie_up);
	mlx_destroy_image(game->mlx, game->display.d_enemie_down);
	mlx_destroy_image(game->mlx, game->display.d_exit);
	mlx_destroy_image(game->mlx, game->display.d_player_left);
	mlx_destroy_image(game->mlx, game->display.d_player_right);
	mlx_destroy_image(game->mlx, game->display.d_player_up);
	mlx_destroy_image(game->mlx, game->display.d_player_down);
	mlx_destroy_image(game->mlx, game->display.d_ground);
	return (1);
}
//
// void	cleanexit_error(t_game *game)
// {
// 	if (game)
// 	{
// 		if (game->map || *game->map)
// 			ft_free_tab(game->map);
// 		free(game);
// 	}
// 	exit(EXIT_FAILURE);
// }
