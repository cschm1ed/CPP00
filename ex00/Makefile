
NAME		:= megaphone

SRCS		:= megaphone.cpp

CFLAGS		:= -Wall -Werror -Wextra -std=c++98

CC			:= g++

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean all re fclean

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

all: $(NAME)
