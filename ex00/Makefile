.PHONY: all clean fclean re

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all = $(NAME)

$(NAME): $(OBJS)
		@echo "\x1b[34m CPP-module day 00 is ready\x1b[0m"
		@clang++ -o $(NAME) $(OBJS) $(FLAGS)

clean:
			rm -rf $(OBJS)

fclean:	clean
			rm -rf $(NAME)

re: fclean $(NAME)


