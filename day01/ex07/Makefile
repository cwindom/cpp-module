.PHONY: all clean fclean re

NAME = replace

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all = $(NAME)

$(NAME):
		@clang++ -o $(NAME) $(SRCS) $(FLAGS)
		@echo "\x1b[34m replace is ready\x1b[0m"

clean:
			@rm -rf $(OBJS)

fclean:	clean
			@rm -rf $(NAME)
			@rm -rf *.replace

re: fclean $(NAME)