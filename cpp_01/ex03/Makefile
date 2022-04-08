# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 18:57:34 by kbaek             #+#    #+#              #
#    Updated: 2022/04/08 18:59:39 by kbaek            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= weapon
CC			= clang++
FLAG		= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \


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