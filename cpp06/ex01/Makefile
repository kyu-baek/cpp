

NAME		= a.out
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp \
					Data.cpp \



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