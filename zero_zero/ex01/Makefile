# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tshata <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 14:35:00 by tshata            #+#    #+#              #
#    Updated: 2019/06/05 11:41:31 by tshata           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = contacts

CC = clang++
CCFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Contact.class.cpp\
       addContact.cpp\
	   main.cpp

HDR = Contact.class.hpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME) 

$(NAME): $(OBJ) $(HDR)
		@$(CC) $(CCFLAGS) $(OBJ) -o $@ 
	
%.o: %.cpp %.hpp
		$(CC) $(CCFLAGS) -o $@ -c $<
clean:
	rm -f $(OBJ)

fclean: rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
