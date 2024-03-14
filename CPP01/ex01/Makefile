# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <luyang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 21:48:27 by luyang            #+#    #+#              #
#    Updated: 2024/03/14 22:25:41 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Horde

SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf

OBJS_DIR = objs
SRCS_DIR = srcs



all: $(NAME)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.cpp
			@mkdir -p $(OBJS_DIR)
			@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
			@$(CC) $(FLAGS) $^ -o $(NAME)
			@printf "program ready!\n"

clean:
			@$(RM) $(OBJS_DIR)
			@printf "removed object files!\n"

fclean: clean
			@$(RM) $(NAME)
			@printf "removed executable!\n"

re : fclean all

.PHONY: all clean fclean re