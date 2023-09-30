# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 14:41:22 by abenheni          #+#    #+#              #
#    Updated: 2023/09/30 17:18:07 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)
%.o : %.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CC) $(CFLAGS)  -c $< -o $@ 
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
