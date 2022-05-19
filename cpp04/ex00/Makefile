# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 19:41:58 by kbaek             #+#    #+#              #
#    Updated: 2022/05/19 19:42:23 by kbaek            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp \



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