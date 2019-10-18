CC = gcc

FLAGS = -Wall -Werror -Wextra

FILE = *.c

BIN = *.o

DEL = rm -Rf

NAME = libft.a

all : ${NAME}

$(NAME) :
	${CC} -c ${FLAGS} ${FILE}
	ar rc libft.a *.o
clean :
	${DEL} ${BIN}

fclean : clean
	${DEL} ${NAME}

re : fclean all
