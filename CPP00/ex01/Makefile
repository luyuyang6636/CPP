NAME = PhoneBook

SRCS = Contact.cpp main.cpp PhoneBook.cpp
OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)
HEADER = Contact.hpp PhoneBook.hpp

SRCS_DIR = srcs
OBJS_DIR = objs
INC_DIR = includes
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g 
RM = rm -f

all: $(NAME)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.cpp
			$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
			$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS_DIR)/*

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

		
