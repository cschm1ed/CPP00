# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 21:11:05 by cschmied          #+#    #+#              #
#    Updated: 2023/06/12 21:11:13 by cschmied         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#
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
