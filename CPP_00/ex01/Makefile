# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 16:52:09 by paugonca          #+#    #+#              #
#    Updated: 2024/01/08 16:56:50 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILER MUST BE C++ DURING THE EVALUATION

NAME 		= phonebook

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

SRC			= main.cpp \
			  Contact.cpp \
			  Phonebook.cpp
OBJ =  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
