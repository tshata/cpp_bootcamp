# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tshata <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 14:35:00 by tshata            #+#    #+#              #
#    Updated: 2019/06/05 12:11:43 by tshata           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
LDFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.cpp

all: $(NAME) 

$(NAME): $(SRCS)
	$(CC) $(LDFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: rm -f $(NAME)

re: fclean all
