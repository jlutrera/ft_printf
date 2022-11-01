NAME		=	libftprintf.a
SRCS		=	${wildcard ./srcs/*.c}
HEADER		=	includes/
CC 			=	gcc
FLAGS		=	-Wall -Wextra -Werror 
OBJS		=	${SRCS:.c=.o} 

${NAME}	:	${OBJS}
			ar -rc ${NAME} ${OBJS}
.c.o	:
			${CC} ${FLAGS} -I ${HEADER} -c $< -o ${<:.c=.o} 
all		:	${NAME}
bonus	:	all
clean 	:
			rm -rf ${OBJS}
fclean 	: 	clean
			rm -rf ${NAME}
re 		:	fclean all
.PHONY	:	fclean all clean re bonus