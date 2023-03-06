# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 11:08:07 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/28 14:58:14 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPP_FLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98

NAME = abstract

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re: fclean all
	@echo "remaking files!"


