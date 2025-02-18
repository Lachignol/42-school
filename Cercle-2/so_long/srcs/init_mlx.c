/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:58:56 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	init_mlx(t_game *game)
{
	int	total_width;
	int	total_height;

	game->mlx = mlx_init();
	if (!game->mlx)
		return (-1);
	if (mlx_get_screen_size(game->mlx, &game->screen_width,
			&game->screen_height) == -1)
		return (ft_putstr_fd(
				"Erreur récup de la taille de l'écran.\n", 2), -1);
	total_width = game->map.c_columns * IMG_WIDTH;
	total_height = game->map.c_rows * IMG_HEIGHT;
	if (total_width > game->screen_width
		|| total_height > game->screen_height)
		return (error_msg("Carte trop grande"),
			mlx_destroy_display(game->mlx), -1);
	game->mlx_win = mlx_new_window(game->mlx, total_width,
			total_height, "Escape to zombie island whithout press escape");
	if (!game->mlx_win)
		return (mlx_destroy_display(game->mlx), -1);
	game->img = mlx_new_image(game->mlx, total_width,
			total_height);
	game->addr = mlx_get_data_addr(game->img, &game->bits_per_pixel,
			&game->line_length, &game->endian);
	return (1);
}
