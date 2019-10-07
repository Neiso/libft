CC = gcc

FLAGS = -Wall -Werror -Wextra

FILE = *.c

BIN = *.o

DEL = rm -Rf

NAME = libft

all : ${NAME}

${NAME} :
	${CC} -c ${FLAGS} ${FILE}
	${CC} -o ${NAME} ${BIN}

clean :
	${DEL} ${BIN}

fclean : clean
	${DEL} ${NAME}