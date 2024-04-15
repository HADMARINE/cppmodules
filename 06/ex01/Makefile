# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 15:03:51 by lhojoon           #+#    #+#              #
#    Updated: 2024/04/15 11:09:35 by lhojoon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CPP = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
DEBUG = -g

DIR = .
SRCS_RAW =	main.cpp \
			Serializer.cpp
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