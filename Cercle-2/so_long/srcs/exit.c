/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:58:22 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

void	cleaning_map(t_map *map)
{
	if (map)
	{
		if (map->map)
			ft_free_tab(map->map);
		free(map);
	}
}

void	cleaning_game(t_game *game)
{
	if (game)
	{
		if (game->mlx)
			free(game->mlx);
		if (game->map.map)
			ft_free_tab(game->map.map);
	}
	free(game);
}

void	clean_exit_prog_with_map(t_map *map, t_game *game)
{
	cleaning_map(map);
	if (game)
		cleaning_game(game);
	exit(EXIT_SUCCESS);
}

void	clean_exit_prog(t_game *game)
{
	cleaning_game(game);
	exit(EXIT_SUCCESS);
}

int	close_window(t_game *game)
{
	mlx_loop_end(game->mlx);
	destroy_image(game);
	mlx_clear_window(game->mlx, game->mlx_win);
	mlx_destroy_image(game->mlx, game->img);
	mlx_destroy_window(game->mlx, game->mlx_win);
	mlx_destroy_display(game->mlx);
	cleaning_game(game);
	exit(EXIT_SUCCESS);
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
