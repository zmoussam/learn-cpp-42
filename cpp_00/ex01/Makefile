# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 21:36:51 by zmoussam          #+#    #+#              #
#    Updated: 2023/01/31 18:45:59 by zmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = *.cpp
NAME = phonebook

OBJ := ${SRC:.cpp=.o}

all: ${NAME}

%.o:%.cpp
	$(CC) -c $(FLAGS) ${SRC}
	
${NAME}: ${OBJ}
	$(CC) -o ${NAME} ${OBJ} 
	
clean:
	rm ${OBJ}
	
fclean:
	rm ${NAME} ${OBJ}

re: fclean all

	