# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 15:39:58 by paugonca          #+#    #+#              #
#    Updated: 2024/01/16 10:17:13 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= conflict

# COMPILER MUST BE CHANGED TO c++ BEFORE SUBMISSION
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

SRC			= main.cpp		\
			  Weapon.cpp	\
			  HumanA.cpp	\
			  HumanB.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
