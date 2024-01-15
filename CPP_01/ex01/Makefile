# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 15:47:53 by paugonca          #+#    #+#              #
#    Updated: 2024/01/15 14:56:37 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= zombie

# COMPILER MUST BE CHANGED TO c++ BEFORE SUBMISSION
CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

SRC			= main.cpp			\
			  Zombie.cpp		\
			  zombieHorde.cpp
OBJ =  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
