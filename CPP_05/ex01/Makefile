# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 11:11:21 by paugonca          #+#    #+#              #
#    Updated: 2024/02/20 12:47:01 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Forms

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp			\
			  Bureaucrat.cpp	\
			  Form.cpp
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
