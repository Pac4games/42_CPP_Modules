# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 11:22:31 by paugonca          #+#    #+#              #
#    Updated: 2024/02/08 12:19:39 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Animals

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

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
