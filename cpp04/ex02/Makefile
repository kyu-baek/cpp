# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 16:17:34 by kbaek             #+#    #+#              #
#    Updated: 2022/06/16 16:17:36 by kbaek            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp \
				srcs/Dog.cpp \
				srcs/Cat.cpp \
				srcs/Animal.cpp \
				srcs/Brain.cpp \


OBJS		= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
				$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
				@rm -rf $(OBJS)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re