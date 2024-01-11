# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 16:52:09 by paugonca          #+#    #+#              #
#    Updated: 2024/01/11 15:30:08 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= phonebook

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

SRC			= main.cpp		\
			  Contact.cpp	\
			  PhoneBook.cpp
OBJ =  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
