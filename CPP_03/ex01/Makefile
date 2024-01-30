# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 14:31:49 by paugonca          #+#    #+#              #
#    Updated: 2024/01/30 15:33:08 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= ScavTrap

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp		\
			  ClapTrap.cpp	\
			  ScavTrap.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
