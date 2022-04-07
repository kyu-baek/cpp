# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 21:01:53 by kbaek             #+#    #+#              #
#    Updated: 2022/04/07 21:59:18 by kbaek            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= accounts_log
CC			= clang++
FLAG		= -Wall -Wextra -Werror -std=c++98
SRCS		= tests.cpp \
				Account.cpp \


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