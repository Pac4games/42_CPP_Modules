# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 15:32:32 by paugonca          #+#    #+#              #
#    Updated: 2024/01/11 16:01:39 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= tests

CXX	 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

SRC 		= Account.cpp	\
			  tests.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
