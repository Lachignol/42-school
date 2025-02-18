/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:58:07 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	enenmie_moove_up(t_game *game, int k, int j, int i)
{
	char	*direction;

	direction = "UP";
	if (game->map.map[i + 1][j] == 'P')
		return (print_game_over(game), 0);
	game->map.map[i][j] = '0';
	game->map.map[i + 1][j] = 'Z';
	game->map.enemies_pos[k].x++;
	game->map.enemies_pos[k].lastdirection = direction;
	return (1);
}

int	enenmie_moove_down(t_game *game, int k, int j, int i)
{
	char	*direction;

	direction = "DOWN";
	if (game->map.map[i - 1][j] == 'P')
		return (print_game_over(game), 0);
	game->map.map[i][j] = '0';
	game->map.map[i - 1][j] = 'Z';
	game->map.enemies_pos[k].x--;
	game->map.enemies_pos[k].lastdirection = direction;
	return (1);
}

int	enenmie_moove_rigth(t_game *game, int k, int j, int i)
{
	char	*direction;

	direction = "RIGHT";
	if (game->map.map[i][j + 1] == 'P')
		return (print_game_over(game), 0);
	game->map.map[i][j] = '0';
	game->map.map[i][j + 1] = 'Z';
	game->map.enemies_pos[k].y++;
	game->map.enemies_pos[k].lastdirection = direction;
	return (1);
}

int	enenmie_moove_left(t_game *game, int k, int j, int i)
{
	char	*direction;

	direction = "LEFT";
	if (game->map.map[i][j - 1] == 'P')
		return (print_game_over(game), 0);
	game->map.map[i][j] = '0';
	game->map.map[i][j - 1] = 'Z';
	game->map.enemies_pos[k].y--;
	game->map.enemies_pos[k].lastdirection = direction;
	return (1);
}
