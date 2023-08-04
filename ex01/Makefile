
NAME 	= main
CC 		= c++
CFLAGS 	= -Wall -Werror -Wextra -std=c++98
FILES 	= main PhoneBook Contact
SRCS	= $(FILES:=.cpp)
OBJS_DIR = .objs
OBJS 	= $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
