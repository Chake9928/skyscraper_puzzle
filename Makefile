SRCS	= arg_parse.c calculate.c main.c chk_visible_count.c chk_dupes.c common_funcs.c manage_memory.c output_answer.c

OBJS	= ${SRCS:.c=.o}

NAME	= solve_skyscraper

CC+FLAGS		= gcc -Werror -Wall -Wextra -o
RM		= rm -f

${NAME}:	${OBJS}
			${CC+FLAGS}  ${NAME}  ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}