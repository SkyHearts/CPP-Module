NAME	= megaphone
CC		= c++
FSAN	= -fsanitize=address -g3 
CFLAGS	= -Wall -Wextra -Werror

SRCS	=	megaphone.cpp
SRCS_DIR	= ./
SRCS_OBJS = $(addprefix $(SRCS_DIR), $(SRCS:.cpp=.o))

all: ${NAME}

${NAME}:	${SRCS_OBJS}
	@echo "Compiling megaphone"
	${CC} ${CFLAGS} ${SRCS_OBJS} -o ${NAME}

clean:
	@echo "cleaning files"
	@rm -rf ${SRCS_OBJS}

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY:	all clean fclean re 