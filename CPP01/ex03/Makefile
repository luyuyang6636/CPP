# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <luyang@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 18:18:11 by luyang            #+#    #+#              #
#    Updated: 2024/03/18 00:19:01 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence

SRCS = Weapon.cpp main.cpp HumanA.cpp HumanB.cpp
OBJS = ${SRCS:%.cpp=$(OBJ_DIR)/%.o}

SRC_DIR = srcs
OBJ_DIR = objs

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf

all: $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
		@mkdir -p $(OBJ_DIR)
		@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $^ -o $(NAME)
		@printf "program compiled!\n"

clean: $(OBJS)
		@$(RM) $(OBJ_DIR)
		@printf "cleaned object files!\n"

fclean: clean
		@$(RM) $(NAME)
		@printf "cleaned executable!\n"

re: fclean all

.PHONY: all clean fclean re
