# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 14:33:55 by kbaek             #+#    #+#              #
#    Updated: 2022/04/10 18:09:56 by kbaek            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
CC			= clang++
FLAG		= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp \
			Fixed.cpp \


OBJS		= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
				$(CC) $(FLAG) -o $(NAME) $(OBJS)

clean:
				@rm -rf $(OBJS)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re