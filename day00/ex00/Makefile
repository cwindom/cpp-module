.PHONY: all clean fclean re

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all = $(NAME)

$(NAME):
		@clang++ -o $(NAME) $(SRCS) $(FLAGS)
		@echo "\x1b[34m day 00 ex00 is ready\x1b[0m"


clean:
			@rm -rf $(OBJS)

fclean:	clean
			@rm -rf $(NAME)

re: fclean $(NAME)


