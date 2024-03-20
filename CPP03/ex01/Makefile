# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <luyang@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 21:54:15 by luyang            #+#    #+#              #
#    Updated: 2024/03/20 01:19:16 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
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
	@$(CC) $(FLAGS) $^ -o $@
	@printf "program compiled!\n"

clean: $(OBJ_DIR)
	@$(RM) $^
	@printf "removed object files!\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "removed program!\n"

re: fclean all

.PHONY: all clean fclean re
 