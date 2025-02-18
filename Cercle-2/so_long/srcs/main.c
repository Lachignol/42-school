/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:20:34 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:59:08 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/so_long.h>

int	main(int count, char **args)
{
	t_game	*game;
	t_map	*map;

	if (count == 2)
	{
		game = init_game();
		map = init_map();
		if (!game)
			clean_exit_prog_with_map(map, game);
		if (check_integrity(map, args[1]) && add_map_to_game(game, map))
		{
			mlx_execute_hook(game);
		}
		clean_exit_prog_with_map(map, game);
		return (0);
	}
	ft_putstr_fd("./so_long [chemin de la map]", 2);
	return (1);
}
