# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 15:35:21 by paugonca          #+#    #+#              #
#    Updated: 2024/01/30 15:36:16 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= FragTrap

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp		\
			  ClapTrap.cpp	\
			  ScavTrap.cpp	\
			  FragTrap.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
