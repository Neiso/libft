CC = gcc

FLAGS = -Wall -Werror -Wextra

FILE = *.c

BIN = *.o

DEL = rm -Rf

NAME = exe

all : ${NAME}

${NAME} :
	${CC} -c ${FLAGS} ${FILE}
	${CC} -o ${NAME} ${BIN}

libft :
	${CC} -c ${FLAGS} ${FILE}
	ar rc libft.a *.o
	${DEL} ${BIN}
clean :
	${DEL} ${BIN}

fclean : clean
	${DEL} ${NAME}
	${DEL} libft.a