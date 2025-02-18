# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ascordil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 19:35:28 by ascordil          #+#    #+#              #
#    Updated: 2024/11/06 20:32:01 by ascordil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY : clean fclean re compilefic all 

NAME = libft.a

C = cc

FLAGS = -Wall -Wextra -Werror

INCLUDES = -Iincludes

FILES = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap

all:compilefic
	ar -rcs ${NAME} ${FILES:%=%.o}	
compilefic:
	${C} ${FLAGS} -c ${FILES:%=srcs/%.c} ${Includes}

clean:
	rm -f ${FILES:%=%.o}	

fclean:clean
	rm -f ${NAME}

re:fclean all
	
