.PHONY: all clean fclean re

NAME = ex01

SRCS = main.cpp span.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all = $(NAME)

$(NAME):
		@clang++ -o $(NAME) $(SRCS) $(FLAGS)
		@echo "\x1b[34m day 08 ex01 is ready\x1b[0m"

clean:
			@rm -rf $(OBJS)

fclean:	clean
			@rm -rf $(NAME)

re: fclean $(NAME)