/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:08:37 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/04 16:25:46 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H

# define SO_LONG_H
# include "libft.h"
# include "mlx.h"
# include <time.h>
# include <errno.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/time.h>
# include <string.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

// plus c'est bas plus ca va vite
# define SPEED_ENEMIES 50
// vitesse en plus en cas d'alerte general 0 = decrement de vitesse plus 
// que 0 on enleve la valeur a SPEED_ENEMIES
# define ALERT_GENERAL 0
// nombre de case a proximite de l'enemie ou il te pourchasse
# define ATTRACT_VALUE 3
// maximum d'enemie autorise sur la carte
# define MAX_ENEMIES 2
# define PRINT_TIME 2
# define WIN_WIDTH_MAX 1280
# define WIN_HEIGHT_MAX 720
# define COLOR_WHITE 0xFFFFFF
# define COLOR_ROUGE 0xFF0000
# define IMG_HEIGHT 32
# define IMG_WIDTH 32
# define ESC 65307
# define UP 119
# define DOWN 115
# define LEFT 97
# define RIGTH 100
# define ARROW_UP 65362
# define ARROW_DOWN 65364
# define ARROW_LEFT 65361
# define ARROW_RIGTH 65363

typedef struct s_position {
	int			x;
	int			y;
	char		*lastdirection;
}	t_position;

typedef struct s_player {
	char			char_player;
	int				count_player;
	t_position		position;

}	t_player;

typedef struct s_collectible {
	char				char_collectible;
	int					count_collectible;
	t_position			position;

}	t_collectible;

typedef struct s_exit {
	char				char_exit;
	int					count_exit;
	t_position			position;

}	t_exit;

typedef struct s_enemie {
	char			char_enemie;
	int				count_enemie;
	t_position		position;

}	t_enemie;

typedef struct s_ground {
	char				char_ground;

}	t_ground;

typedef struct s_wall {
	char				char_wall;

}	t_wall;

typedef struct s_map {
	int						c_rows;
	int						c_columns;
	char					**map;
	t_collectible			collectible;
	t_exit					exit;
	t_player				player;
	t_ground				ground;
	t_wall					wall;
	t_enemie				enemie;
	t_position				enemies_pos[MAX_ENEMIES];

}	t_map;

typedef struct s_display {
	char			*player_left;
	char			*player_right;
	char			*player_up;
	char			*player_down;
	char			*collectible;
	char			*exit;
	char			*ground;
	char			*wall_one;
	char			*wall_two;
	char			*wall_left;
	char			*wall_right;
	char			*wall_up;
	char			*wall_c_right_up;
	char			*wall_c_right_down;
	char			*wall_c_left_up;
	char			*wall_c_left_down;
	char			*wall_down;
	char			*enemie_left;
	char			*enemie_right;
	char			*enemie_up;
	char			*enemie_down;
	void			*d_player_left;
	void			*d_player_right;
	void			*d_player_up;
	void			*d_player_down;
	void			*d_enemie_left;
	void			*d_enemie_right;
	void			*d_enemie_up;
	void			*d_enemie_down;
	void			*d_exit;
	void			*d_collect;
	void			*d_ground;
	void			*d_wall_one;
	void			*d_wall_two;
	void			*d_wall_left;
	void			*d_wall_c_left_down;
	void			*d_wall_c_left_up;
	void			*d_wall_c_right_up;
	void			*d_wall_c_right_down;
	void			*d_wall_right;
	void			*d_wall_up;
	void			*d_wall_down;
}	t_display;

typedef struct s_game {
	void				*mlx;
	void				*mlx_win;
	void				*img;
	int					bits_per_pixel;
	int					line_length;
	int					endian;
	int					x;
	int					y;
	int					moove;
	int					timer;
	int					forbidden;
	int					img_width;
	int					img_height;
	int					screen_height;
	int					screen_width;
	int					alert_general_notif;
	int					alert_general;
	int					game_over;
	int					you_win;
	char				*addr;
	char				*lastdir;
	t_map				map;
	t_display			display;
}	t_game;

// struc_func
t_map	*init_map(void);
t_game	*init_game(void);
t_map	*copy_map_for_flood_fill(t_map *map);
void	init_player(t_map *map);
void	init_collectible(t_map *map);
void	init_ground(t_map *map);
void	init_image(t_game *game);
void	init_wall(t_map *map);
void	init_player_pos(t_game *game);
void	init_enemie(t_map *map);
int		add_map_to_game(t_game *game, t_map *map);
void	init_exit(t_map *map);
void	init_image1(t_game *game);
void	init_image2(t_game *game);
void	init_image3(t_game *game);
void	init_image4(t_game *game);
void	update_count_and_moove_player(t_map *map, int x, int y);
void	update_count_and_moove_collectible(t_map *map, int x, int y);
void	update_count_and_moove_exit(t_map *map, int x, int y);
void	update_player(t_map *map, int x, int y);
void	update_collectible(t_map *map, int x, int y);
int		update_count_and_pos_enemie(t_map *map, int x, int y);
void	update_exit(t_map *map, int x, int y);
// exit_func
void	cleaning_map(t_map *map);
void	cleaning_game(t_game *game);
void	clean_exit_prog_with_map(t_map *map, t_game *game);
void	clean_exit_prog(t_game *game);
int		destroy_image(t_game *game);
void	cleanexit_error(t_game *game);
int		close_window(t_game *game);
void	error_msg(char *msg);
// maps_func
void	print_map(t_map *map);
int		read_file(char *path_of_file);
int		get_nb_line_of_map(char *path_of_map);
int		get_map(t_map *map, char *path_of_map);
// file_func
int		read_file(char *path_of_file);
// check_map_func
int		check_wall(char *line, int c);
int		check_integrity(t_map *map, char *path_of_map);
int		check_format_of_map(char *path_of_map);
int		check_if_bordered(t_map *map);
int		check_count_and_no_other_itm(t_map *map);
int		check_all_line_same_nb(t_map *map);
int		check_flood_fill(t_map *map);
int		check_all_item_are_accessible(t_map *map, t_map *map_copy);
t_map	*copy_map_for_flood_fill(t_map *map);
void	flood_fill(t_map *map_copy, int x, int y, char newchar);
int		is_other_items(char c);
// minilibxutils
int		init_mlx(t_game *game);
int		mlx_execute_hook(t_game *game);
void	my_mlx_pixel_put(t_game *game, int x, int y, int color);
int		refresh_render(t_game *game);
// render
int		render(t_game *game);
int		random_moove_part_one(t_game *game, int k, int number_direct);
int		random_moove_part_two(t_game *game, int k, int number_direct);
int		print_player(t_game *game, int j, int i);
int		print_not_all_collectible(t_game *game);
int		print_ground(t_game *game, int j, int i);
int		print_wall(t_game *game, int j, int i );
int		print_exit(t_game *game, int j, int i);
int		print_game_moove(t_game *game);
int		print_collectible(t_game *game, int j, int i);
int		print_game_over(t_game *game);
int		print_you_win(t_game *game);
int		print_enemie(t_game *game, int j, int i);
int		print_moove(t_game *game);
int		print_enemie_right_or_left(t_game *game, int j, int i, int k);
int		print_enemie_up_or_down(t_game *game, int j, int i, int k);
int		print_alert_general(t_game *game);
int		print_more_info(t_game *game);
int		print_wall_border(t_game *game, int j, int i);
int		print_wall_corner(t_game *game, int j, int i);
int		timer_set(t_game *game);
// controller
int		key_push(int keycode, t_game *game);
int		key_relache(int keycode, t_game *game);
int		enemies_moove(t_game *game);
int		moove_up(t_game *game);
int		moove_down(t_game *game);
int		moove_left(t_game *game);
int		moove_rigth(t_game *game);
int		mouse_in_win(int x, int y);
int		mouse_leave_win(int x, int y);
int		show_key(int keycode);
int		enenmie_moove_up(t_game *game, int k, int j, int i);
int		enenmie_moove_down(t_game *game, int k, int j, int i);
int		enenmie_moove_rigth(t_game *game, int k, int j, int i);
int		enenmie_moove_left(t_game *game, int k, int j, int i);
int		check_proximity(t_game *game, int k, int attract_value );
int		check_possible_moove(t_game *game, int k, int number_direct);
int		attract(t_game *game, int k);
int		recup_collectible(t_game *game);
#endif
