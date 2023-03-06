# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 11:08:07 by lkavalia          #+#    #+#              #
#    Updated: 2023/03/06 15:22:03 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPP_FLAGS = -Wall -Werror -Wextra -Wshadow -g -std=c++98 -fsanitize=address

NAME = interface

SRCS = main.cpp \
		AMateria.cpp \
		MateriaSource.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re: fclean all
	@echo "remaking files!"


