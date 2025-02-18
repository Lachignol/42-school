NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

SRCDIR = srcs
SRCBONUSDIR = srcs_bonus
INCLUDEDIR = includes
LIBFTDIR = libft
MINILIBXDIR = minilibx-linux
OBJS_DIR = objs

LIBFT = $(LIBFTDIR)/libft.a

MINILIBX = $(MINILIBXDIR)/libmlx_Linux.a

FILES = main.c exit.c map_func.c init_struct.c check_map.c init_image.c \
update_struct.c flood_fill.c error_msg.c check_integrity.c print_info.c \
minilibx_utils.c render.c controller.c init_mlx.c  enemies_ia.c print_enemie.c \
mlx_hook.c init_struct_2.c print.c enemies_moove.c enemies_moove_direction.c \
destroy_image.c print_wall.c setup_timer.c print_status.c\

SRCS = $(addprefix $(SRCDIR)/, $(FILES))

OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJS_DIR)/%.o)

INCLUDES = -I$(INCLUDEDIR) -I$(LIBFTDIR) -I$(MINILIBXDIR)

all: $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCDIR)/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(MINILIBX):
	$(MAKE) -C $(MINILIBXDIR)

$(NAME): $(OBJS) $(LIBFT) $(MINILIBX)
	$(CC) $(CFLAGS) $^ -L$(LIBFTDIR) -lft -lft -Lmlx_linux -lmlx_Linux -L$(MINILIBXDIR)  -Imlx_linux -lXext -lX11 -lm -lz -o $@
	# $(CC) $(CFLAGS) $(OBJS) -L$(LIBFTDIR) -lft -o $@

clean:
	rm -rf $(OBJS_DIR)
	$(MAKE) -C $(LIBFTDIR) clean
	$(MAKE) -C ${MINILIBXDIR} clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
