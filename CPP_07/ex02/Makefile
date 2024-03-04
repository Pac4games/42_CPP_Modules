# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 13:04:52 by paugonca          #+#    #+#              #
#    Updated: 2024/03/04 15:07:44 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Array

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp		\
			  Vessel.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
