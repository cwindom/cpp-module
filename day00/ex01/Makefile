.PHONY: all clean fclean re

NAME = phonebook

SRCS = main.cpp Contact.cpp addNew.cpp search.cpp

HEADERS = Contact.hpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all = $(NAME)

$(NAME):
		@clang++ -o $(NAME) $(SRCS) $(HEADER) $(FLAGS)
		@echo "\x1b[34m day 00 ex01 is ready\x1b[0m"

clean:
			@rm -rf $(OBJS)

fclean:	clean
			@rm -rf $(NAME)

re: fclean $(NAME)
