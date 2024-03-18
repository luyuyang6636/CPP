# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <luyang@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 23:37:44 by luyang            #+#    #+#              #
#    Updated: 2024/03/18 00:02:17 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRCS = main.cpp Harl.cpp
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

clean:
	@$(RM) $(OBJ_DIR)
	@printf "removed object files!\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "removed executable!\n"

re: fclean all

.PHONY: all clean fclean re