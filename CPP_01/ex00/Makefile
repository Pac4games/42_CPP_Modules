# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 15:47:53 by paugonca          #+#    #+#              #
#    Updated: 2024/01/16 09:49:43 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= zombie

# COMPILER MUST BE CHANGED TO c++ BEFORE SUBMISSION
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp			\
			  Zombie.cpp		\
			  newZombie.cpp		\
			  randomChump.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
