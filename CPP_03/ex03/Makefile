# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 15:35:21 by paugonca          #+#    #+#              #
#    Updated: 2024/01/30 18:34:59 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= DiamondTrap

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow#-g

SRC			= main.cpp			\
			  ClapTrap.cpp		\
			  ScavTrap.cpp		\
			  FragTrap.cpp		\
			  DiamondTrap.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
