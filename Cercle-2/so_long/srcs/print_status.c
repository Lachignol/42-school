/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 18:00:05 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	print_you_win(t_game *game)
{
	int		x;
	int		windows_width;
	int		string_width;
	char	*str;
	char	*nbr_moove;

	if (!game || !game->mlx || !game->map.c_columns || !game->map.c_rows)
		return (0);
	nbr_moove = ft_itoa(game->moove);
	if (!nbr_moove)
		return (0);
	str = ft_strjoin("Congratulation you win (nbr of moove):", nbr_moove);
	if (!str)
		return (0);
	string_width = 41 * 6;
	windows_width = (game->map.c_columns - 1) * (IMG_WIDTH);
	x = (windows_width - string_width) / 2;
	mlx_string_put(game->mlx, game->mlx_win,
		x,
		(game->map.c_rows - 1) * (IMG_HEIGHT / 2), COLOR_WHITE,
		str);
	free(nbr_moove);
	free(str);
	game->you_win = 1;
	return (1);
}

int	print_game_over(t_game *game)
{
	int	x;
	int	windows_width;
	int	string_width;

	if (!game || !game->mlx || !game->map.c_columns || !game->map.c_rows)
		return (0);
	string_width = 9 * 6;
	windows_width = (game->map.c_columns - 1) * (IMG_WIDTH);
	x = (windows_width - string_width) / 2;
	mlx_string_put(game->mlx, game->mlx_win,
		x,
		(game->map.c_rows - 1) * (IMG_HEIGHT / 2), COLOR_ROUGE,
		"Game over");
	game->game_over = 1;
	return (1);
}

int	print_moove(t_game *game)
{
	ft_printf("Nombre de mouvements:%d\n", game->moove);
	return (1);
}
