FLAGS = -Wall -Werror -Wextra

FILE2 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

FILE = ${wildcard srcs/*.c}

BONUS_FILE = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c

DEL = rm -Rf

LIBFT = libft.a

FT_PRINTF = ft_printf

GNL = get_next_line

FILE_O=$(FILE:.c=.o)

BONUS_FILE_O=$(BONUS_FILE:.c=.o)

RED = \033[0;31m

GREEN = \033[0;32m

YELLOW = \033[0;33m

CYAN = \033[0;36m

NO_COLOR = \033[0m

all : ${FILE_O} ${LIBFT} ${GNL} ${FT_PRINTF}
	@echo "${CYAN}Compilation done with success.${NO_COLOR}"	
	@echo "${CYAN}Libft.a created with success. It contains :\n\tLIBFT\n\tGET_NEXT_LINE\n\tFT_PRINTF${NO_COLOR}"

%.o: %.c
	@gcc ${FLAGS} -c -o $@ $<

$(LIBFT) :
	@ar rcs libft.a $(FILE_O)
	@python3 -c 'print("\n${YELLOW}Libft compiled with success.${NO_COLOR}")'

$(GNL) :
	@make -C ./get_next_line

$(FT_PRINTF) : ${LIBFT}
	@make -C ./${FT_PRINTF}

clean :
	@echo "${RED}Deleting *.o files from libft${NO_COLOR}";
	@${DEL} ${FILE_O} ${BONUS_FILE_O};
	@python3 -c 'print("${GREEN}DONE" , "[\u2713]")';
	@echo "${RED}Deleting *.o files from get_next_line${NO_COLOR}";
	@make clean -C ./get_next_line;
	@python3 -c 'print("${GREEN}DONE", "[\u2713]${NO_COLOR}")';
	@echo "${RED}Deleting *.o files from ft_printf${NO_COLOR}";
	@make clean -C ./ft_printf;
	@python3 -c 'print("${GREEN}DONE", "[\u2713]${NO_COLOR}")';

fclean : clean
	@echo "${RED}Deleting libft.a file from libft"
	@${DEL} ${LIBFT}
	@python3 -c 'print("${GREEN}DONE" , "[\u2713]${NO_COLOR}")';
	@${DEL} libft.so

re : fclean all

.PHONY : ${LIBFT} ${FT_PRINTF} all clean fclean re ${GNL}

# so :
# 	gcc -c *.c
# 	gcc -fPIC *.o -o libft.so

# bonus : ${BONUS_FILE}
# 	gcc -c ${FLAGS} ${FILE} ${BONUS_FILE_0}
# 	ar rc libft.a $(BONUS_FILE_O)
