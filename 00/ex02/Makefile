# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 13:31:49 by lhojoon           #+#    #+#              #
#    Updated: 2024/03/19 19:26:42 by lhojoon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CPP = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

DIR = .
SRCS_RAW =	Account.cpp \
			tests.cpp
SRCS = $(addprefix $(DIR)/,$(SRCS_RAW))
OBJS = $(SRCS:cpp=o)
INCLUDES = -I.

all: $(NAME)
$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) $(DEBUG) -o $(NAME)
%.o: %.cpp
	$(CPP) -c $< -o $@ $(CFLAGS) $(INCLUDES) $(DEBUG)
clean:
	rm $(OBJS) -f
fclean: clean
	rm $(NAME) -f
re: fclean all