NAME		= PmergeMe
CC			= g++ 
FSAN		= -fsanitize=address -g3 
CFLAGS		= -Wall -Wextra -Werror -std=c++98
#  -I ${FSAN}
#${INCLUDES}
INCLUDES	= -g3

SRCS	=	main.cpp PmergeMe.cpp 
SRCS_DIR	= ./
SRCS_OBJS =  $(addprefix $(SRCS_DIR), $(SRCS:.cpp=.o))

all:	${NAME}

${SRCS_DIR}%.o: ${SRCS_DIR}%.cpp
	@echo "Compiling $<"
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${SRCS_OBJS}
	@echo "Compiling Main"
	${CC} ${CFLAGS} ${SRCS_OBJS} -o ${NAME}

clean:
	@echo "cleaning files"
	@rm -rf ${SRCS_OBJS}

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY:	all clean fclean re 