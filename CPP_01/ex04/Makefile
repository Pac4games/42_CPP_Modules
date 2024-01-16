# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 10:20:06 by paugonca          #+#    #+#              #
#    Updated: 2024/01/16 10:23:10 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= replace

# COMPILER MUST BE CHANGED TO c++ BEFORE SUBMISSION
CXX			= c++
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
