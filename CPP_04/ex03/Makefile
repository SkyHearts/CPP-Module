NAME		= main
CC			= c++
FSAN		= -fsanitize=address -g3 
CFLAGS		= -Wall -Wextra -Werror -std=c++98
#${INCLUDES}
#INCLUDES	= ./

SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
SRCS_DIR	= ./
SRCS_OBJS = $(addprefix $(SRCS_DIR), $(SRCS:.cpp=.o))

all:	${NAME}

${NAME}:	${SRCS_OBJS}
	@echo "Compiling Main"
	${CC} ${CFLAGS} ${SRCS_OBJS} -o ${NAME}

${SRCS_DIR}%.o: ${SRCS_DIR}%.cpp
	@echo "Compiling $<"
	${CC} ${CFLAGS} -c $< -o $@
	
clean:
	@echo "cleaning files"
	@rm -rf ${SRCS_OBJS}

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY:	all clean fclean re 