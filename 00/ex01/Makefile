# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 15:42:58 by lhojoon           #+#    #+#              #
#    Updated: 2023/12/22 17:17:49 by lhojoon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPP = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror 

DIR =.
SRCS_RAW = megaphone.cpp
SRCS = $(addprefix $(DIR)/,$(SRCS_RAW))
OBJS = $(SRCS:cpp=o)
INCLUDES = 

all: $(NAME)
$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) $(DEBUG) -o $(NAME)
%.o: %.cpp
	$(CPP) -c $< -o $@ $(CFLAGS) $(INCLUDES) $(DEBUG)
clean:
	rm $(OBJS) $(OBJB) -f
fclean: clean
	rm $(NAME) -f
re: fclean all