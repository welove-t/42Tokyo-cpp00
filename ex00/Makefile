
NAME		= megaphone
CXX 		= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
