# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <luyang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 20:38:05 by luyang            #+#    #+#              #
#    Updated: 2024/03/14 21:00:47 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brainz

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf

SRCS_DIR = srcs
OBJS_DIR = objs

all: $(NAME)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.cpp
			@mkdir -p $(OBJS_DIR)
			@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
			@$(CC) $(FLAGS) $^ -o $(NAME)
			@printf "program ready!\n"

clean:
			@$(RM) $(OBJS_DIR)
			@printf "cleaned object files!\n"

fclean: clean
			@$(RM) $(NAME)
			@printf "cleaned executable!\n"

re: fclean all

.PHONY: all clean fclean re