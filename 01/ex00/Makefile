# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 15:42:58 by lhojoon           #+#    #+#              #
#    Updated: 2023/12/22 16:08:19 by lhojoon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
CC = cc
CFLAGS = -Wall -Wextra -Werror

DIR = 
SRCS_RAW = 
SRCS = $(addprefix $(DIR)/,$(SRCS_RAW))
OBJS = $(SRCS:c=o)
INCLUDES = -I./includes


all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(OBJS) $(DEBUG) -o $(NAME)
clean:
	rm $(OBJS) $(OBJB) -f
fclean: clean libclean
	rm $(NAME) -f
re: fclean all

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS) $(INCLUDES) $(DEBUG)