# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 17:41:33 by paugonca          #+#    #+#              #
#    Updated: 2024/02/08 12:19:09 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Abstraction

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp			\
			  Animal.cpp		\
			  Dog.cpp			\
			  Cat.cpp			\
			  WrongAnimal.cpp	\
			  WrongCat.cpp		\
			  Brain.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
