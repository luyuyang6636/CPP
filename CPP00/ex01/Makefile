NAME = PhoneBook

SRCS = Contact.cpp main.cpp PhoneBook.cpp
OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)
HEADER = Contact.hpp PhoneBook.hpp

SRCS_DIR = srcs
OBJS_DIR = objs
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
		
