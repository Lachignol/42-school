/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:58:00 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	enemies_moove(t_game *game)
{
	int	k;
	int	random_number;
	int	attract_value;

	k = 0;
	random_number = 0;
	attract_value = ATTRACT_VALUE;
	while (k < game->map.enemie.count_enemie)
	{
		random_number = check_proximity(game, k, attract_value);
		if (game->alert_general)
			random_number = attract(game, k);
		if (random_number == 0)
			random_number = rand() % 5;
		if (random_number <= 2)
			random_moove_part_one(game, k, random_number);
		else
			random_moove_part_two(game, k, random_number);
		k++;
	}
	return (1);
}

int	check_possible_moove(t_game *game, int k, int number_direct)
{
	int	i;
	int	j;

	i = game->map.enemies_pos[k].x;
	j = game->map.enemies_pos[k].y;
	if (number_direct == 1)
		return (game->map.map[i + 1][j] != '1'
			&& game->map.map[i + 1][j] != 'C' && game->map.map[i + 1][j] != 'Z'
			&& game->map.map[i + 1][j] != 'E');
	if (number_direct == 2)
		return (game->map.map[i - 1][j] != '1'
			&& game->map.map[i - 1][j] != 'C' && game->map.map[i - 1][j] != 'Z'
			&& game->map.map[i - 1][j] != 'E');
	if (number_direct == 3)
		return (game->map.map[i][j + 1] != '1'
			&& game->map.map[i][j + 1] != 'C' && game->map.map[i][j + 1] != 'Z'
			&& game->map.map[i][j + 1] != 'E');
	if (number_direct == 4)
		return (game->map.map[i][j - 1] != '1'
			&& game->map.map[i][j - 1] != 'C' && game->map.map[i][j - 1] != 'Z'
			&& game->map.map[i][j - 1] != 'E');
	return (0);
}

int	random_moove_part_one(t_game *game, int k, int number_direct)
{
	int	i;
	int	j;

	i = game->map.enemies_pos[k].x;
	j = game->map.enemies_pos[k].y;
	if (number_direct == 1 && game->map.map[i + 1][j] != '1'
		&& game->map.map[i + 1][j] != 'C' && game->map.map[i + 1][j] != 'Z'
		&& game->map.map[i + 1][j] != 'E')
		enenmie_moove_up(game, k, j, i);
	if (number_direct == 2 && game->map.map[i - 1][j] != '1'
		&& game->map.map[i - 1][j] != 'C' && game->map.map[i - 1][j] != 'Z'
		&& game->map.map[i - 1][j] != 'E')
		enenmie_moove_down(game, k, j, i);
	else
		return (0);
	return (1);
}

int	random_moove_part_two(t_game *game, int k, int number_direct)
{
	int		i;
	int		j;

	i = game->map.enemies_pos[k].x;
	j = game->map.enemies_pos[k].y;
	if (number_direct == 3 && game->map.map[i][j + 1] != '1'
		&& game->map.map[i][j + 1] != 'C' && game->map.map[i][j + 1] != 'Z'
		&& game->map.map[i][j + 1] != 'E')
		enenmie_moove_rigth(game, k, j, i);
	if (number_direct == 4 && game->map.map[i][j - 1] != '1'
		&& game->map.map[i][j - 1] != 'C' && game->map.map[i][j - 1] != 'Z'
		&& game->map.map[i][j - 1] != 'E')
		enenmie_moove_left(game, k, j, i);
	else
		return (0);
	return (1);
}
