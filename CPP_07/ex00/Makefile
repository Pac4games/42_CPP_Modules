# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 13:57:19 by paugonca          #+#    #+#              #
#    Updated: 2024/02/29 15:43:17 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= whatever

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
