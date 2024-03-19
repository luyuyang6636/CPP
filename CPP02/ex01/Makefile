# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <luyang@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 22:53:58 by luyang            #+#    #+#              #
#    Updated: 2024/03/18 23:11:47 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRCS = main.cpp Fixed.cpp
OBJS = ${SRCS:%.cpp=$(OBJ_DIR)/%.o}
OBJ_DIR = objs

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -rf

all: $(NAME)

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	@$(CC) $(FLAGS) $^ -o $@
	@printf "program compiled!\n"

clean: $(OBJS)
	@$(RM) $(OBJ_DIR)
	@printf "removed object files!\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "removed program!"

re: fclean all

.PHONY: all clean fclean re
