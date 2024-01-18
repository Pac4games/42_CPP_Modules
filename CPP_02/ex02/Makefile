# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 14:02:21 by paugonca          #+#    #+#              #
#    Updated: 2024/01/18 14:03:50 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= fixed

# COMPILER MUST BE CHANGED TO c++ BEFORE SUBMISSION
CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp	\
			  Fixed.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
