# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <luyang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 22:43:09 by luyang            #+#    #+#              #
#    Updated: 2024/03/14 22:51:25 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brian

SRC = main.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

.o: .cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@printf "program compiled!\n"

clean: $(OBJ)
		@$(RM) $^

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

