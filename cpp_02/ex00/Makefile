# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 12:28:14 by zmoussam          #+#    #+#              #
#    Updated: 2023/05/24 19:21:43 by zmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Fixed.cpp main.cpp 
NAME = Fixed

OBJ := ${SRC:.cpp=.o}

all: ${NAME}

%.o:%.cpp *.hpp
	$(CC) -c $(FLAGS) ${SRC}
	
${NAME}: ${OBJ}
	$(CC) -o ${NAME} ${OBJ} 
	
clean:
	rm -rf ${OBJ}
	
fclean:
	rm -rf ${NAME} ${OBJ}

re: fclean all