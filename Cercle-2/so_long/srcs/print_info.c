/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/04 18:17:18 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	print_alert_general(t_game *game)
{
	int	x;
	int	windows_width;
	int	string_width;

	if (!game || !game->mlx || !game->map.c_columns || !game->map.c_rows)
		return (0);
	string_width = 56 * 6;
	windows_width = (game->map.c_columns - 1) * IMG_WIDTH;
	x = (windows_width - string_width) / 2;
	if (game->map.enemie.count_enemie < 1)
	{
		mlx_string_put(game->mlx, game->mlx_win,
			x,
			(game->map.c_rows - 1) * (IMG_HEIGHT / 2), COLOR_ROUGE,
			"Une tempete approche !! vite rejoins le bateau");
	}
	else
	{
		mlx_string_put(game->mlx, game->mlx_win,
			x,
			(game->map.c_rows - 1) * (IMG_HEIGHT / 2), COLOR_ROUGE,
			"Du vent ! Les zombies te sentent de plus loin ! Va au bateau.");
	}
	return (1);
}

int	print_game_moove(t_game *game)
{
	char	*nbr_moove;
	char	*str;

	if (!game || !game->mlx || !game->map.c_columns || !game->map.c_rows)
		return (0);
	nbr_moove = ft_itoa(game->moove);
	if (!nbr_moove)
		return (0);
	str = ft_strjoin("Number of your moove ", nbr_moove);
	if (!str)
		return (0);
	mlx_string_put(game->mlx, game->mlx_win, 28, 14, COLOR_WHITE, str);
	free(nbr_moove);
	free(str);
	return (1);
}

int	print_not_all_collectible(t_game *game)
{
	int	x;
	int	windows_width;
	int	string_width;

	if (!game || !game->mlx || !game->map.c_columns || !game->map.c_rows)
		return (0);
	string_width = 26 * 6;
	windows_width = (game->map.c_columns - 1) * (IMG_WIDTH);
	x = (windows_width - string_width) / 2;
	mlx_string_put(game->mlx, game->mlx_win,
		x,
		(game->map.c_rows - 1) * (IMG_HEIGHT / 2), COLOR_WHITE,
		"Il manque des collectibles");
	return (1);
}
