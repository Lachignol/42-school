NAME = ft_display_file

C = cc

FLAGS = -Wall -Wextra -Werror

FILES = display_file.c 

OBJ = ${FILES:%.c=%.o}

all : ${OBJ} 
	${C} ${FLAGS} -o ${NAME} ${OBJ}

%.o: %.c
	$(C) $(CFLAGS) -c $< -o $@

clean :
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re:fclean all

.phony: clean fclean re all
