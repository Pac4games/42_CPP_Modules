# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 17:41:33 by paugonca          #+#    #+#              #
#    Updated: 2024/02/01 17:48:10 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Brainiac

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
