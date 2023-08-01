
NAME 	= main
CC 		= c++
CFLAGS 	= -Wall -Werror -Wextra -std=c++98
FILES 	= main PhoneBook
SRCS	= $(FILES:=.cpp)
OBJS 	= $(SRCS:.cpp=.o)
HEADER	= PhonoeBook.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
