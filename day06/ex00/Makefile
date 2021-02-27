.PHONY: all clean fclean re

NAME = convert

SRCS = main.cpp Cast.cpp

HEADERS = Cast.hpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all = $(NAME)

$(NAME):
		@clang++ -o $(NAME) $(SRCS) $(HEADER) $(FLAGS)
		@echo "\x1b[34m day 06 ex00 is ready\x1b[0m"

clean:
			@rm -rf $(OBJS)

fclean:	clean
			@rm -rf $(NAME)

re: fclean $(NAME)
