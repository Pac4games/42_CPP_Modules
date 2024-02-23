# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 14:48:54 by paugonca          #+#    #+#              #
#    Updated: 2024/02/23 14:49:43 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Slave

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98#-g

SRC			= main.cpp						\
			  Bureaucrat.cpp				\
			  AForm.cpp						\
			  ShrubberyCreationForm.cpp		\
			  RobotomyRequestForm.cpp		\
			  PresidentialPardonForm.cpp	
OBJ 		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
