# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 12:03:03 by paugonca          #+#    #+#              #
#    Updated: 2024/02/07 13:00:12 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Snowgrave

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow#-g

SRC			= main.cpp			\
			  Animal.cpp		\
			  Dog.cpp			\
			  Cat.cpp			\
			  WrongAnimal.cpp	\
			  WrongCat.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
