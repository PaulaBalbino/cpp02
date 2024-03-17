# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 12:03:21 by pbalbino          #+#    #+#              #
#    Updated: 2024/03/16 12:03:23 by pbalbino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed

CXX		= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJPATH = ./obj/

SRC =	main.cpp \
		Fixed.cpp

OBJ = $(addprefix $(OBJPATH), $(SRC:.cpp=.o))

all:	$(OBJPATH) $(NAME)

$(OBJPATH):
	mkdir $(OBJPATH)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJPATH)%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJPATH)

fclean:		clean
	rm -rf $(NAME)

re:	fclean all