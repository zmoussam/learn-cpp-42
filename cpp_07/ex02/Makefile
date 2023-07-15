# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 21:25:14 by zakaria           #+#    #+#              #
#    Updated: 2023/07/13 21:25:19 by zakaria          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = *.cpp 
NAME = Bureaucrat

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