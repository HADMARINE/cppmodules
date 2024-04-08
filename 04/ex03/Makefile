# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 17:33:34 by lhojoon           #+#    #+#              #
#    Updated: 2024/04/08 16:20:07 by lhojoon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CPP = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
DEBUG = -g

DIR = .
SRCS_RAW =	main.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp \
			AMateria.cpp
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