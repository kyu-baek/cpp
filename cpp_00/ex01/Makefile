# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 17:31:24 by kbaek             #+#    #+#              #
#    Updated: 2022/04/07 17:31:27 by kbaek            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
CC			= clang++
FLAG		= -Wall -Wextra -Werror
SRCS		= main.cpp \
			phonebook.cpp \

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