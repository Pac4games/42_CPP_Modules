# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 12:03:03 by paugonca          #+#    #+#              #
#    Updated: 2024/02/08 13:52:34 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Snowgrave

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp			\
			  AMateria.cpp		\
			  Character.cpp		\
			  MateriaSource.cpp	\
			  Ice.cpp			\
			  Cure.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
