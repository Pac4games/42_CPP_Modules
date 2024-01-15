# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 15:39:58 by paugonca          #+#    #+#              #
#    Updated: 2024/01/15 15:40:26 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= brain

# COMPILER MUST BE CHANGED TO c++ BEFORE SUBMISSION
CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

SRC			= main.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
