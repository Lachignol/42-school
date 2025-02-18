/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:57:38 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/so_long.h>

int	key_push(int keycode, t_game *game)
{
	game->forbidden = 0;
	if (keycode == ESC)
		return (close_window(game));
	else if (keycode == UP || keycode == ARROW_UP)
		return (game->moove += moove_up(game), print_moove(game));
	else if (keycode == DOWN || keycode == ARROW_DOWN)
		return (game->moove += moove_down(game), print_moove(game));
	else if (keycode == LEFT || keycode == ARROW_LEFT)
		return (game->moove += moove_left(game), print_moove(game));
	else if (keycode == RIGTH || keycode == ARROW_RIGTH)
		return (game->moove += moove_rigth(game), print_moove(game));
	return (1);
}

int	moove_up(t_game *game)
{
	char	*lastdir;

	lastdir = "UP";
	if (game->map.map[game->x - 1][game->y] != '1')
	{
		if (game->map.map[game->x - 1][game->y] == 'C')
			recup_collectible(game);
		if (game->map.map[game->x - 1][game->y] == 'E' &&
			game->map.collectible.count_collectible == 0)
			return (print_you_win(game), 0);
		if (game->map.map[game->x - 1][game->y] == 'E' &&
			game->map.collectible.count_collectible != 0)
		{
			return (game->forbidden = -1, 0);
		}
		if (game->map.map[game->x - 1][game->y] == 'Z')
			return (print_game_over(game), 0);
		game->map.map[game->x][game->y] = '0';
		game->map.map[game->x - 1][game->y] = 'P';
		game->x--;
	}
	game->lastdir = lastdir;
	return (1);
}

int	moove_down(t_game *game)
{
	char	*lastdir;

	lastdir = "DOWN";
	if (game->map.map[game->x + 1][game->y] != '1')
	{
		if (game->map.map[game->x + 1][game->y] == 'C')
			recup_collectible(game);
		if (game->map.map[game->x + 1][game->y] == 'E' &&
			game->map.collectible.count_collectible == 0)
			return (print_you_win(game), 0);
		if (game->map.map[game->x + 1][game->y] == 'E' &&
			game->map.collectible.count_collectible != 0)
		{
			return (game->forbidden = -1, 0);
		}
		if (game->map.map[game->x + 1][game->y] == 'Z')
			return (print_game_over(game), 0);
		game->map.map[game->x][game->y] = '0';
		game->map.map[game->x + 1][game->y] = 'P';
		game->x++;
	}
	game->lastdir = lastdir;
	return (1);
}

int	moove_left(t_game *game)
{
	char	*lastdir;

	lastdir = "LEFT";
	if (game->map.map[game->x][game->y - 1] != '1')
	{
		if (game->map.map[game->x][game->y - 1] == 'C')
			recup_collectible(game);
		if (game->map.map[game->x][game->y - 1] == 'E' &&
			game->map.collectible.count_collectible == 0)
			return (print_you_win(game), 0);
		if (game->map.map[game->x][game->y - 1] == 'E' &&
			game->map.collectible.count_collectible != 0)
		{
			return (game->forbidden = -1, 0);
		}
		if (game->map.map[game->x][game->y - 1] == 'Z')
			return (print_game_over(game), 0);
		game->map.map[game->x][game->y] = '0';
		game->map.map[game->x][game->y - 1] = 'P';
		game->y--;
	}
	game->lastdir = lastdir;
	return (1);
}

int	moove_rigth(t_game *game)
{
	char	*lastdir;

	lastdir = "RIGHT";
	if (game->map.map[game->x][game->y + 1] != '1')
	{
		if (game->map.map[game->x][game->y + 1] == 'C')
			recup_collectible(game);
		if (game->map.map[game->x][game->y + 1] == 'E' &&
			game->map.collectible.count_collectible == 0)
			return (print_you_win(game), 0);
		if (game->map.map[game->x][game->y + 1] == 'E' &&
			game->map.collectible.count_collectible != 0)
		{
			return (game->forbidden = -1, 0);
		}
		if (game->map.map[game->x][game->y + 1] == 'Z')
			return (print_game_over(game), 0);
		game->map.map[game->x][game->y] = '0';
		game->map.map[game->x][game->y + 1] = 'P';
		game->y++;
	}
	game->lastdir = lastdir;
	return (1);
}
// int	key_relache(int keycode, t_game *game)
// {
// 	(void)game;
// 	ft_printf("key_relache%d\n", keycode);
// 	return (1);
// }
//
// int	mouse_in_win(int x, int y)
// {
// 	printf("hello x = %d y = %d", x, y);
// 	return (1);
// }
//
// int	mouse_leave_win(int x, int y)
// {
// 	printf("good bye x = %d y = %d", x, y);
// 	return (1);
// }
//
// int	show_key(int keycode)
// {
// 	ft_printf("%d\n", keycode);
// 	return (1);
// }
