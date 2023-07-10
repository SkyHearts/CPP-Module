NAME		= phonebook
CC			= c++
FSAN		= -fsanitize=address -g3 
CFLAGS		= -Wall -Wextra -Werror -std=c++98
#${INCLUDES}
#INCLUDES	= ./

SRCS	=	main.cpp phonebook.cpp contacts.cpp
SRCS_DIR	= ./
SRCS_OBJS = $(addprefix $(SRCS_DIR), $(SRCS:.c=.o))

all:	${NAME}

${NAME}:	${SRCS_OBJS}
	@echo "Compiling phonebook"
	${CC} ${CFLAGS} ${SRCS_OBJS} -o ${NAME}

clean:
	@echo "cleaning files"
	@rm -rf ${SRCS_OBJS}

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY:	all clean fclean re 