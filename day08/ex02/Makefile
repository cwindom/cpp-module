.PHONY: all clean fclean re

NAME = ex02

SRCS = main.cpp MutantStack.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all = $(NAME)

$(NAME):
		@clang++ -o $(NAME) $(SRCS) $(FLAGS)
		@echo "\x1b[34m day 08 ex02 is ready\x1b[0m"

clean:
			@rm -rf $(OBJS)

fclean:	clean
			@rm -rf $(NAME)

re: fclean $(NAME)