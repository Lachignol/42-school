/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:57:54 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	attract(t_game *game, int k)
{
	int	x;
	int	y;

	x = game->map.enemies_pos[k].x;
	y = game->map.enemies_pos[k].y;
	if ((x > game->x) && check_possible_moove(game, k, 2))
		return (2);
	else if ((x < game->x) && check_possible_moove(game, k, 1))
		return (1);
	else if ((y > game->y) && check_possible_moove(game, k, 4))
		return (4);
	else if ((y < game->y) && check_possible_moove(game, k, 3))
		return (3);
	return (0);
}

int	check_proximity(t_game *game, int k, int attract_value)
{
	int	x;
	int	y;

	x = game->map.enemies_pos[k].x;
	y = game->map.enemies_pos[k].y;
	if ((y < game->y) && (y - game->y >= -attract_value)
		&& check_possible_moove(game, k, 3))
		return (3);
	else if ((y > game->y) && (y - game->y <= attract_value)
		&& check_possible_moove(game, k, 4))
		return (4);
	else if ((x < game->x) && (x - game->x >= -attract_value)
		&& check_possible_moove(game, k, 1))
		return (1);
	else if ((x > game->x) && (x - game->x <= attract_value)
		&& check_possible_moove(game, k, 2))
		return (2);
	return (0);
}

int	recup_collectible(t_game *game)
{
	game->map.collectible.count_collectible--;
	if (game->map.collectible.count_collectible == 0)
	{
		print_alert_general(game);
		game->alert_general_notif = 1;
	}
	return (1);
}
