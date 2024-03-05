# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefle                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luyang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 15:25:13 by luyang            #+#    #+#              #
#    Updated: 2024/03/05 15:33:11 by luyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
