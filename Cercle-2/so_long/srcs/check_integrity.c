/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:48:50 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 17:57:26 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<../includes/so_long.h>

int	check_integrity(t_map *map, char *path_of_map)
{
	if (!check_format_of_map(path_of_map))
		return (error_msg("The map must be a .ber file"), 0);
	if (get_map(map, path_of_map))
	{
		if (!check_if_bordered(map))
			return (error_msg("The map is not bordered by wall"), 0);
		if (!check_count_and_no_other_itm(map))
			return (error_msg("The map must have:"),
				error_msg("1 Player,1 Exit and one or more Collectibles"), 0);
		if (!check_all_line_same_nb(map))
			return (error_msg("The map must be a rectangle"), 0);
		if (!check_flood_fill(map))
			return (error_msg("Not all elements acessible by the player"), 0);
		return (1);
	}
	else
		return (error_msg("For some reason we can't get the map"), 0);
}

int	check_format_of_map(char *path_of_map)
{
	int		length_of_name;
	char	*ext_ber;

	ext_ber = ".ber";
	length_of_name = ft_strlen(path_of_map);
	return (ft_strcmp(&path_of_map[length_of_name - 4], ext_ber) == 0);
}

int	is_other_items(char c)
{
	return (c != '0' && c != 'P'
		&& c != 'C' && c != '1'
		&& c != 'E' && c != 'Z');
}
