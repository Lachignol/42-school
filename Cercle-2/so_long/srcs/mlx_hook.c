/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:20:34 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:59:28 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/so_long.h>

int	mlx_execute_hook(t_game *game)
{
	mlx_loop_hook(game->mlx, render, game);
	mlx_hook(game->mlx_win, 2, 1L << 0, key_push, game);
	mlx_hook(game->mlx_win, 17, 1L << 0, close_window, game);
	mlx_loop(game->mlx);
	return (1);
}
