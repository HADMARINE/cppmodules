# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 15:42:58 by lhojoon           #+#    #+#              #
#    Updated: 2024/03/19 19:27:00 by lhojoon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CPP = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

DIR = .
SRCS_RAW =	main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp
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