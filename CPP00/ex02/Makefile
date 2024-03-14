# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <luyang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 15:55:01 by luyang            #+#    #+#              #
#    Updated: 2024/03/14 16:28:40 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

SRCS = Account.cpp tests.cpp
OBJS = ${SRCS:%.cpp=$(OBJS_DIR)/%.o}
OBJS_DIR = objs

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(OBJS_DIR)/%.o : %.cpp
		mkdir -p $(OBJS_DIR)
		$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $^ -o $(NAME)

clean:
		$(RM) $(OBJS_DIR)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
