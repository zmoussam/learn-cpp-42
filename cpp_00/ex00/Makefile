# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 18:49:19 by zmoussam          #+#    #+#              #
#    Updated: 2023/01/29 21:11:03 by zmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
NAME = megaphone

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

	
