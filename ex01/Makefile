# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 21:12:24 by cschmied          #+#    #+#              #
#    Updated: 2023/06/12 21:12:27 by cschmied         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= awesome_phonebook

SRCS		:= awesome_phonebook.cpp contact.class.cpp phonebook.class.cpp

OBJS		:= $(SRCS:.cpp=.o)

CFLAGS		:= -Wall -Werror -Wextra -std=c++98

CC			:= g++

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean all re fclean

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

all: $(NAME)
