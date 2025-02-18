NAME = libftprintf.a

C = cc

SRCDIR = srcs/

INCLUDEDIR = includes

LIBFTDIR = libft

FILESPRINTF = ft_printf.c number_func.c parser.c str_func.c ptr_func.c 

#FILESBONUS =

OBJPRINT = ${addprefix ${SRCDIR},${FILESPRINTF:%.c=%.o}}

OBJBONUS = ${FILESBONUS:%.c=%.o}

FLAGS = -Wall -Wextra -Werror -I ${INCLUDEDIR}

all: ${NAME}

${NAME}: ${OBJPRINT}
	make -s -C ${LIBFTDIR}
	cp ${LIBFTDIR}/libft.a ${NAME}
	ar -rcs ${NAME} ${OBJPRINT}

${SRCDIR}%.o: ${SRCDIR}%.c
	${C} ${FLAGS} -c $< -o $@

compile_test: all
	@ ${C} ${FLAGS} test.c -L. ${NAME} -o test
 
#bonus : ${NAME} ${OBJBONUS}
#	@ ar -rcs ${NAME} ${OBJBONUS}
 
#test: compile_test
#	@ ./test
 
#lldb: compile_test
#	lldb test
                 
clean:
	rm -f ${OBJPRINT} ${OBJBONUS}
	make -s clean -C ${LIBFTDIR}
 
fclean: clean
	rm -f ${NAME}
	make -s fclean -C ${LIBFTDIR}
 
re: fclean all
 
.PHONY: clean fclean re all test bonus compile_test lldb

