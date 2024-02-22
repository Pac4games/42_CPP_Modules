# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 14:34:48 by paugonca          #+#    #+#              #
#    Updated: 2024/02/22 16:53:51 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= MoreForms

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
