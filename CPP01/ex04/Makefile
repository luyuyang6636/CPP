# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <luyang@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 22:42:24 by luyang            #+#    #+#              #
#    Updated: 2024/03/17 22:54:36 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -f

all: $(NAME)

.o : .cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): 
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re