# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 10:05:02 by paugonca          #+#    #+#              #
#    Updated: 2023/11/30 10:06:51 by paugonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -f
MKD		= mkdir

_SRC	= src/
_OBJ	= obj/

SRC		= megaphone.cpp

OBJ		= $(patsubst $(_SRC)%.c,$(_OBJ)%.o,$(SRC))

all: $(NAME)

$(_OBJ)%.o: $(_SRC)%.c
	$(MKD) -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RMV) -r $(_OBJ)

fclean: clean
	$(RMV) -r $(NAME)
	
re: fclean all

.PHONY: all deps clean fclean re
