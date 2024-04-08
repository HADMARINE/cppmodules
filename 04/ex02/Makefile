# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 17:33:34 by lhojoon           #+#    #+#              #
#    Updated: 2024/04/08 15:17:34 by lhojoon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CPP = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
DEBUG = -g

DIR = .
SRCS_RAW =	main.cpp \
			Animal.cpp \
			WrongAnimal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongCat.cpp \
			Brain.cpp
SRCS = $(addprefix $(DIR)/,$(SRCS_RAW))
OBJS = $(SRCS:cpp=o)
INCLUDES = -I.


all: $(NAME)
$(NAME): $(OBJS)
	$(CPP) $(OBJS) $(DEBUG) -o $(NAME)
clean:
	rm $(OBJS) -f
fclean: clean
	rm $(NAME) -f
re: fclean all

%.o: %.cpp
	$(CPP) -c $< -o $@ $(CFLAGS) $(INCLUDES) $(DEBUG)