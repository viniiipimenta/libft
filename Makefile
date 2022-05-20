NAME = libft.a

SRCS = $(wildcard ./ft_*.c)

OBJS = ${SRCS:.c=.o}

CC		= cc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}
		ranlib ${NAME}


all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

comp: 
	cc -Wall -Werror -Wextra -L. -lft main.c

.PHONY: all clean fclean re
