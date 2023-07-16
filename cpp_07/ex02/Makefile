# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 18:04:44 by zmoussam          #+#    #+#              #
#    Updated: 2023/07/15 18:10:43 by zmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp 
NAME = array

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