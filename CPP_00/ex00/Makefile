# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 10:05:02 by paugonca          #+#    #+#              #
#    Updated: 2024/01/11 15:32:11 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= megaphone

CXX	 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

SRC 		= megaphone.cpp
OBJ 		=  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
